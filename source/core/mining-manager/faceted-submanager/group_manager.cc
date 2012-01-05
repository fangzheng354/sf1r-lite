#include "group_manager.h"
#include <mining-manager/util/split_ustr.h>
#include <mining-manager/util/FSUtil.hpp>
#include <document-manager/DocumentManager.h>
#include <mining-manager/MiningException.hpp>

#include <iostream>
#include <cassert>

#include <glog/logging.h>

using namespace sf1r::faceted;

namespace
{

const izenelib::util::UString::EncodingType ENCODING_TYPE = izenelib::util::UString::UTF_8;

}

GroupManager::GroupManager(
    DocumentManager* documentManager,
    const std::string& dirPath
)
: documentManager_(documentManager)
, dirPath_(dirPath)
{
}

bool GroupManager::open(const std::vector<GroupConfig>& configVec)
{
    propValueMap_.clear();

    for (std::vector<GroupConfig>::const_iterator it = configVec.begin();
        it != configVec.end(); ++it)
    {
        if (! it->isStringType())
            continue;

        std::pair<PropValueMap::iterator, bool> res =
            propValueMap_.insert(PropValueMap::value_type(it->propName, PropValueTable(dirPath_, it->propName)));

        if (res.second)
        {
            PropValueTable& pvTable = res.first->second;
            if (!pvTable.open())
            {
                LOG(ERROR) << "PropValueTable::open() failed, property name: " << it->propName;
                return false;
            }
        }
        else
        {
            LOG(WARNING) << "the group property " << it->propName << " is opened already.";
        }
    }

    return true;
}

bool GroupManager::processCollection()
{
    LOG(INFO) << "start building group index data...";

    try
    {
        FSUtil::createDir(dirPath_);
    }
    catch(FileOperationException& e)
    {
        LOG(ERROR) << "exception in FSUtil::createDir: " << e.what();
        return false;
    }

    for (PropValueMap::iterator it = propValueMap_.begin();
        it != propValueMap_.end(); ++it)
    {
        const std::string& propName = it->first;
        PropValueTable& pvTable = it->second;

        const docid_t startDocId = pvTable.docIdNum();
        assert(startDocId && "docid 0 should have been reserved in PropValueTable constructor");

        const docid_t endDocId = documentManager_->getMaxDocId();
        pvTable.reserveDocIdNum(endDocId + 1);

        LOG(INFO) << "start building property: " << propName
                  << ", start doc id: " << startDocId
                  << ", end doc id: " << endDocId;

        for (docid_t docId = startDocId; docId <= endDocId; ++docId)
        {
            PropValueTable::ValueIdList valueIdList;

            Document doc;
            if (documentManager_->getDocument(docId, doc))
            {
                Document::property_iterator it = doc.findProperty(propName);
                if (it != doc.propertyEnd())
                {
                    const izenelib::util::UString& propValue = it->second.get<izenelib::util::UString>();
                    std::vector<vector<izenelib::util::UString> > groupPaths;
                    split_group_path(propValue, groupPaths);

                    try
                    {
                        for (std::vector<vector<izenelib::util::UString> >::const_iterator pathIt = groupPaths.begin();
                            pathIt != groupPaths.end(); ++pathIt)
                        {
                            PropValueTable::pvid_t pvId = pvTable.insertPropValueId(*pathIt);
                            valueIdList.push_back(pvId);
                        }
                    }
                    catch(MiningException& e)
                    {
                        LOG(ERROR) << "exception: " << e.what()
                                   << ", doc id: " << docId;
                    }
                }
            }
            pvTable.insertValueIdList(valueIdList);

            if (docId % 100000 == 0)
            {
                LOG(INFO) << "inserted doc id: " << docId;
            }
        }

        if (!pvTable.flush())
        {
            LOG(ERROR) << "PropValueTable::flush() failed, property name: " << propName;
        }
    }

    LOG(INFO) << "finished building group index data";
    return true;
}

