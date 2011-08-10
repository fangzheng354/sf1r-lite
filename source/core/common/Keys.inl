/**
 * @file sf1r/driver/Keys.inl
 * @date Created <2011-08-09 17:23:01>
 *
 * This file is generated by generators/driver_keys.rb by collecting keys
 * from source code. Do not edit this file directly.
 */

#define SF1_DRIVER_KEYS \
(DOCID)\
(ITEMID)\
(USERID)\
(_categories)\
(_custom_rank)\
(_duplicated_document_count)\
(_id)\
(_image_id)\
(_rank)\
(_similar_document_count)\
(analyzer)\
(analyzer_result)\
(apply_la)\
(attr)\
(attr_label)\
(attr_name)\
(attr_result)\
(attr_top)\
(attr_value)\
(category_id)\
(cid)\
(cname)\
(collection)\
(condition)\
(conditions)\
(content)\
(count)\
(counter)\
(custom_rank)\
(date)\
(date_range)\
(doccount)\
(docid)\
(docid_list)\
(document_count)\
(document_support_count)\
(duplicate_with)\
(duration)\
(elapsed_time)\
(end)\
(event)\
(exclude_items)\
(expression)\
(faceted)\
(freq)\
(func)\
(group)\
(group_label)\
(group_property)\
(groupby)\
(highlight)\
(hit_docs_num)\
(id)\
(in)\
(include_items)\
(index)\
(input_items)\
(is_add)\
(items)\
(keywords)\
(label)\
(labels)\
(last_modified)\
(left_time)\
(level)\
(limit)\
(log_group_labels)\
(log_keywords)\
(manmade)\
(max_count)\
(message)\
(meta)\
(min_freq)\
(mining)\
(name)\
(name_entity)\
(name_entity_item)\
(name_entity_list)\
(name_entity_type)\
(offset)\
(operator_)\
(order)\
(order_id)\
(page_count)\
(page_start)\
(params)\
(popular)\
(popular_queries)\
(prefix)\
(price)\
(progress)\
(property)\
(quantity)\
(query)\
(ranking_model)\
(realtime)\
(realtime_queries)\
(reasons)\
(rec_type)\
(recent)\
(refined_query)\
(related_queries)\
(remote_ip)\
(remove_duplicated_result)\
(resource)\
(resources)\
(search)\
(search_session)\
(seconds)\
(select)\
(session_id)\
(sim_list)\
(similar)\
(similar_to)\
(similar_to_image)\
(snippet)\
(sort)\
(source)\
(start)\
(status)\
(sub_labels)\
(summary)\
(summary_property_alias)\
(summary_sentence_count)\
(system_events)\
(taxonomy)\
(taxonomy_label)\
(timestamp)\
(top_k_count)\
(topic)\
(total_count)\
(ts)\
(type)\
(use_original_keyword)\
(use_synonym_extension)\
(user_queries)\
(value)\
(weight)


/* LOCATIONS

DOCID
  process/controllers/DocumentsController.cpp:489
  process/controllers/DocumentsController.cpp:556
  process/controllers/DocumentsController.cpp:689
  process/controllers/DocumentsGetHandler.cpp:278
  process/controllers/DocumentsGetHandler.cpp:280
  process/controllers/DocumentsGetHandler.cpp:333
  process/controllers/DocumentsGetHandler.cpp:359

ITEMID
  process/controllers/RecommendController.cpp:101
  process/controllers/RecommendController.cpp:147
  process/controllers/RecommendController.cpp:156
  process/controllers/RecommendController.cpp:191
  process/controllers/RecommendController.cpp:471
  process/controllers/RecommendController.cpp:521
  process/controllers/RecommendController.cpp:565
  process/controllers/RecommendController.cpp:567
  process/controllers/RecommendController.cpp:617
  process/controllers/RecommendController.cpp:620
  process/controllers/RecommendController.cpp:626
  process/controllers/RecommendController.cpp:684
  process/controllers/RecommendController.cpp:688
  process/controllers/RecommendController.cpp:758
  process/controllers/RecommendController.cpp:761
  process/controllers/RecommendController.cpp:834
  process/controllers/RecommendController.cpp:837
  process/controllers/RecommendController.cpp:900
  process/controllers/RecommendController.cpp:906
  process/controllers/RecommendController.cpp:1112
  process/controllers/RecommendController.cpp:1131
  process/controllers/RecommendController.cpp:1242

USERID
  process/parsers/SearchParser.cpp:105
  process/controllers/RecommendController.cpp:67
  process/controllers/RecommendController.cpp:264
  process/controllers/RecommendController.cpp:313
  process/controllers/RecommendController.cpp:357
  process/controllers/RecommendController.cpp:359
  process/controllers/RecommendController.cpp:408
  process/controllers/RecommendController.cpp:411
  process/controllers/RecommendController.cpp:417
  process/controllers/RecommendController.cpp:683
  process/controllers/RecommendController.cpp:687
  process/controllers/RecommendController.cpp:741
  process/controllers/RecommendController.cpp:743
  process/controllers/RecommendController.cpp:819
  process/controllers/RecommendController.cpp:820
  process/controllers/RecommendController.cpp:899
  process/controllers/RecommendController.cpp:905
  process/controllers/RecommendController.cpp:1029

_categories
  process/renderers/DocumentsRenderer.cpp:163

_custom_rank
  process/renderers/DocumentsRenderer.cpp:106

_duplicated_document_count
  process/renderers/DocumentsRenderer.cpp:75
  process/renderers/DocumentsRenderer.cpp:144

_id
  process/renderers/DocumentsRenderer.cpp:39
  process/renderers/DocumentsRenderer.cpp:100
  process/controllers/FacetedController.cpp:394
  process/controllers/DocumentsGetHandler.cpp:273
  process/controllers/DocumentsGetHandler.cpp:275
  process/controllers/DocumentsGetHandler.cpp:333
  process/controllers/DocumentsGetHandler.cpp:351

_image_id
  process/renderers/DocumentsRenderer.cpp:157
  process/controllers/DocumentsGetHandler.cpp:197

_rank
  process/renderers/DocumentsRenderer.cpp:101

_similar_document_count
  process/renderers/DocumentsRenderer.cpp:151

analyzer
  process/parsers/SearchParser.cpp:241

analyzer_result
  process/controllers/DocumentsSearchHandler.cpp:483
  process/controllers/DocumentsSearchHandler.cpp:501

apply_la
  process/parsers/SearchParser.cpp:242

attr
  process/controllers/DocumentsSearchHandler.cpp:366
  process/controllers/DocumentsSearchHandler.cpp:700

attr_label
  process/parsers/SearchParser.cpp:159

attr_name
  process/parsers/SearchParser.cpp:169
  process/renderers/DocumentsRenderer.cpp:391

attr_result
  process/parsers/AttrParser.cpp:26
  process/parsers/AttrParser.cpp:28

attr_top
  process/parsers/AttrParser.cpp:31
  process/parsers/AttrParser.cpp:33

attr_value
  process/parsers/SearchParser.cpp:170

category_id
  process/controllers/FacetedController.cpp:414
  process/controllers/FacetedController.cpp:416

cid
  process/controllers/FacetedController.cpp:396

cname
  process/controllers/FacetedController.cpp:397

collection
  process/controllers/LogAnalysisController.cpp:255
  process/controllers/LogAnalysisController.cpp:271
  process/controllers/LogAnalysisController.cpp:328
  process/controllers/CommandsController.cpp:25
  process/controllers/KeywordsController.cpp:65
  process/controllers/DocumentsSearchHandler.cpp:82
  process/controllers/StatusController.cpp:45
  process/controllers/DocumentsController.cpp:710
  process/controllers/Sf1Controller.cpp:39
  process/controllers/QueryCorrectionController.cpp:30

condition
  process/controllers/RecommendController.cpp:168

conditions
  process/controllers/LogAnalysisController.cpp:70
  process/controllers/LogAnalysisController.cpp:72
  process/controllers/DocumentsSearchHandler.cpp:342
  process/controllers/DocumentsGetHandler.cpp:321

content
  process/controllers/LogAnalysisController.cpp:182
  process/controllers/FacetedController.cpp:50
  process/controllers/FacetedController.cpp:104

count
  process/controllers/LogAnalysisController.cpp:262

counter
  process/controllers/StatusController.cpp:74

custom_rank
  process/controllers/DocumentsSearchHandler.cpp:346
  process/controllers/DocumentsSearchHandler.cpp:349

date
  process/controllers/TopicController.cpp:189

date_range
  process/controllers/TopicController.cpp:224
  process/controllers/TopicController.cpp:226

doccount
  process/controllers/FacetedController.cpp:161
  process/controllers/FacetedController.cpp:278

docid
  process/controllers/FacetedController.cpp:395

docid_list
  process/controllers/FacetedController.cpp:429

document_count
  process/renderers/DocumentsRenderer.cpp:243
  process/renderers/DocumentsRenderer.cpp:307
  process/renderers/DocumentsRenderer.cpp:356
  process/renderers/DocumentsRenderer.cpp:362
  process/renderers/DocumentsRenderer.cpp:392
  process/renderers/DocumentsRenderer.cpp:401
  process/controllers/CommandsController.cpp:64
  process/controllers/StatusController.cpp:56
  process/controllers/StatusController.cpp:72

document_support_count
  process/renderers/DocumentsRenderer.cpp:275

duplicate_with
  process/controllers/DocumentsGetHandler.cpp:106

duration
  process/controllers/LogAnalysisController.cpp:260
  process/controllers/LogAnalysisController.cpp:276
  process/controllers/LogAnalysisController.cpp:348
  process/controllers/LogAnalysisController.cpp:352
  process/controllers/LogAnalysisController.cpp:360

elapsed_time
  process/controllers/StatusController.cpp:68

end
  process/controllers/TopicController.cpp:228

event
  process/controllers/RecommendController.cpp:898
  process/controllers/RecommendController.cpp:904
  process/controllers/RecommendController.cpp:1130

exclude_items
  process/controllers/RecommendController.cpp:1018

expression
  process/parsers/CustomRankingParser.cpp:91
  process/parsers/CustomRankingParser.cpp:92

faceted
  process/controllers/DocumentsSearchHandler.cpp:690

freq
  process/controllers/TopicController.cpp:190
  process/controllers/DocumentsController.cpp:682
  process/controllers/RecommendController.cpp:1234

func
  core/common/parsers/SelectFieldParser.cpp:32

group
  process/controllers/DocumentsSearchHandler.cpp:362
  process/controllers/DocumentsSearchHandler.cpp:695

group_label
  process/parsers/SearchParser.cpp:131
  process/controllers/DocumentsController.cpp:681

group_property
  process/controllers/DocumentsController.cpp:656
  process/controllers/DocumentsController.cpp:661

groupby
  process/controllers/LogAnalysisController.cpp:106
  process/controllers/LogAnalysisController.cpp:108

highlight
  process/parsers/SelectParser.cpp:119

hit_docs_num
  process/controllers/LogAnalysisController.cpp:256
  process/controllers/LogAnalysisController.cpp:272
  process/controllers/LogAnalysisController.cpp:339

id
  process/renderers/DocumentsRenderer.cpp:306
  process/controllers/TopicController.cpp:211
  process/controllers/DocumentsController.cpp:516
  process/controllers/FacetedController.cpp:160
  process/controllers/FacetedController.cpp:277

in
  process/parsers/SearchParser.cpp:190

include_items
  process/controllers/RecommendController.cpp:1017

index
  process/controllers/StatusController.cpp:53

input_items
  process/controllers/RecommendController.cpp:1016

is_add
  process/controllers/RecommendController.cpp:903

items
  process/controllers/RecommendController.cpp:746
  process/controllers/RecommendController.cpp:822
  process/controllers/RecommendController.cpp:1236

keywords
  process/parsers/SearchParser.cpp:98
  process/controllers/AutoFillController.cpp:104
  process/controllers/DocumentsController.cpp:649
  process/controllers/DocumentsController.cpp:654
  process/controllers/QueryCorrectionController.cpp:31

label
  process/renderers/DocumentsRenderer.cpp:242
  process/renderers/DocumentsRenderer.cpp:305
  process/renderers/DocumentsRenderer.cpp:361
  process/renderers/DocumentsRenderer.cpp:400

labels
  process/renderers/DocumentsRenderer.cpp:232
  process/renderers/DocumentsRenderer.cpp:293
  process/renderers/DocumentsRenderer.cpp:357
  process/renderers/DocumentsRenderer.cpp:393

last_modified
  process/controllers/StatusController.cpp:55
  process/controllers/StatusController.cpp:73
  process/controllers/StatusController.cpp:80
  process/controllers/StatusController.cpp:87

left_time
  process/controllers/StatusController.cpp:69

level
  process/controllers/LogAnalysisController.cpp:180
  process/controllers/FacetedController.cpp:158
  process/controllers/FacetedController.cpp:275

limit
  core/common/parsers/PageInfoParser.cpp:20
  core/common/parsers/PageInfoParser.cpp:22
  process/controllers/AutoFillController.cpp:79
  process/controllers/LogAnalysisController.cpp:166
  process/controllers/LogAnalysisController.cpp:209
  process/controllers/KeywordsController.cpp:66
  process/controllers/DocumentsController.cpp:663
  process/controllers/DocumentsController.cpp:700
  process/controllers/DocumentsController.cpp:702

log_group_labels
  process/parsers/SearchParser.cpp:187

log_keywords
  process/parsers/SearchParser.cpp:186

manmade
  process/controllers/FacetedController.cpp:388

max_count
  process/controllers/RecommendController.cpp:1002
  process/controllers/RecommendController.cpp:1199

message
  process/controllers/TestController.cpp:28
  process/controllers/TestController.cpp:28

meta
  process/controllers/StatusController.cpp:70

min_freq
  process/controllers/RecommendController.cpp:1211

mining
  process/controllers/StatusController.cpp:78

name
  process/parsers/CustomRankingParser.cpp:126
  process/controllers/TopicController.cpp:62
  process/controllers/TopicController.cpp:118
  process/controllers/TopicController.cpp:201
  process/controllers/DocumentsController.cpp:519
  process/controllers/DocumentsController.cpp:587
  process/controllers/DocumentsController.cpp:595
  process/controllers/FacetedController.cpp:159
  process/controllers/FacetedController.cpp:276

name_entity
  process/controllers/DocumentsSearchHandler.cpp:685

name_entity_item
  process/parsers/SearchParser.cpp:110
  process/parsers/SearchParser.cpp:120
  process/renderers/DocumentsRenderer.cpp:274

name_entity_list
  process/renderers/DocumentsRenderer.cpp:266

name_entity_type
  process/parsers/SearchParser.cpp:111
  process/parsers/SearchParser.cpp:121

offset
  core/common/parsers/PageInfoParser.cpp:15
  core/common/parsers/PageInfoParser.cpp:17

operator_
  core/common/parsers/ConditionParser.cpp:68

order
  core/common/parsers/OrderParser.cpp:23

order_id
  process/controllers/RecommendController.cpp:744

page_count
  process/controllers/LogAnalysisController.cpp:258
  process/controllers/LogAnalysisController.cpp:274
  process/controllers/LogAnalysisController.cpp:341

page_start
  process/controllers/LogAnalysisController.cpp:257
  process/controllers/LogAnalysisController.cpp:273
  process/controllers/LogAnalysisController.cpp:340

params
  process/parsers/CustomRankingParser.cpp:80
  process/parsers/CustomRankingParser.cpp:81

popular
  process/controllers/KeywordsController.cpp:127
  process/controllers/KeywordsController.cpp:137
  process/controllers/KeywordsController.cpp:139

popular_queries
  process/controllers/DocumentsSearchHandler.cpp:670

prefix
  process/controllers/AutoFillController.cpp:78

price
  process/controllers/RecommendController.cpp:766

progress
  process/controllers/StatusController.cpp:67

property
  core/common/parsers/ConditionParser.cpp:43
  core/common/parsers/SelectFieldParser.cpp:30
  core/common/parsers/OrderParser.cpp:22
  process/parsers/SearchParser.cpp:141
  process/parsers/SearchParser.cpp:203
  process/parsers/GroupingParser.cpp:54
  process/parsers/SelectParser.cpp:118
  process/renderers/DocumentsRenderer.cpp:355
  process/controllers/RecommendController.cpp:181
  process/controllers/RecommendController.cpp:184

quantity
  process/controllers/RecommendController.cpp:765

query
  process/controllers/LogAnalysisController.cpp:254
  process/controllers/LogAnalysisController.cpp:270
  process/controllers/LogAnalysisController.cpp:327

ranking_model
  process/parsers/SearchParser.cpp:248
  process/parsers/SearchParser.cpp:250

realtime
  process/controllers/KeywordsController.cpp:128
  process/controllers/KeywordsController.cpp:164
  process/controllers/KeywordsController.cpp:166

realtime_queries
  process/controllers/DocumentsSearchHandler.cpp:675

reasons
  process/controllers/RecommendController.cpp:1125

rec_type
  process/controllers/RecommendController.cpp:999
  process/controllers/RecommendController.cpp:1032

recent
  process/controllers/KeywordsController.cpp:98
  process/controllers/KeywordsController.cpp:100

refined_query
  process/controllers/DocumentsSearchHandler.cpp:713
  process/controllers/QueryCorrectionController.cpp:43

related_queries
  process/controllers/DocumentsSearchHandler.cpp:665

remote_ip
  process/controllers/DocumentsSearchHandler.cpp:81
  process/controllers/DocumentsGetHandler.cpp:45

remove_duplicated_result
  process/controllers/DocumentsSearchHandler.cpp:482

resource
  process/controllers/DocumentsController.cpp:360
  process/controllers/DocumentsController.cpp:404
  process/controllers/DocumentsController.cpp:445
  process/controllers/DocumentsController.cpp:488
  process/controllers/DocumentsController.cpp:555
  process/controllers/DocumentsController.cpp:647
  process/controllers/DocumentsController.cpp:689
  process/controllers/RecommendController.cpp:48
  process/controllers/RecommendController.cpp:127
  process/controllers/RecommendController.cpp:168
  process/controllers/RecommendController.cpp:267
  process/controllers/RecommendController.cpp:316
  process/controllers/RecommendController.cpp:359
  process/controllers/RecommendController.cpp:411
  process/controllers/RecommendController.cpp:416
  process/controllers/RecommendController.cpp:474
  process/controllers/RecommendController.cpp:524
  process/controllers/RecommendController.cpp:567
  process/controllers/RecommendController.cpp:620
  process/controllers/RecommendController.cpp:625
  process/controllers/RecommendController.cpp:686
  process/controllers/RecommendController.cpp:687
  process/controllers/RecommendController.cpp:688
  process/controllers/RecommendController.cpp:743
  process/controllers/RecommendController.cpp:744
  process/controllers/RecommendController.cpp:746
  process/controllers/RecommendController.cpp:820
  process/controllers/RecommendController.cpp:822
  process/controllers/RecommendController.cpp:902
  process/controllers/RecommendController.cpp:1002
  process/controllers/RecommendController.cpp:1029
  process/controllers/RecommendController.cpp:1030
  process/controllers/RecommendController.cpp:1032
  process/controllers/RecommendController.cpp:1199
  process/controllers/RecommendController.cpp:1211

resources
  process/controllers/TopicController.cpp:55
  process/controllers/TopicController.cpp:111
  process/controllers/TopicController.cpp:180
  process/controllers/DocumentsSearchHandler.cpp:642
  process/controllers/DocumentsSearchHandler.cpp:653
  process/controllers/DocumentsController.cpp:511
  process/controllers/DocumentsController.cpp:580
  process/controllers/DocumentsController.cpp:676
  process/controllers/RecommendController.cpp:1103
  process/controllers/RecommendController.cpp:1229
  process/controllers/FacetedController.cpp:148
  process/controllers/FacetedController.cpp:211
  process/controllers/FacetedController.cpp:265
  process/controllers/FacetedController.cpp:328
  process/controllers/DocumentsGetHandler.cpp:53
  process/controllers/DocumentsGetHandler.cpp:188
  process/controllers/DocumentsGetHandler.cpp:413
  process/controllers/DocumentsGetHandler.cpp:431
  process/controllers/DocumentsGetHandler.cpp:463

search
  process/controllers/DocumentsSearchHandler.cpp:338

search_session
  process/controllers/DocumentsGetHandler.cpp:232
  process/controllers/DocumentsGetHandler.cpp:235

seconds
  process/controllers/TestController.cpp:43

select
  process/controllers/LogAnalysisController.cpp:30
  process/controllers/LogAnalysisController.cpp:32
  process/controllers/KeywordsController.cpp:76
  process/controllers/KeywordsController.cpp:80
  process/controllers/DocumentsSearchHandler.cpp:334
  process/controllers/DocumentsGetHandler.cpp:213

session_id
  process/controllers/LogAnalysisController.cpp:259
  process/controllers/LogAnalysisController.cpp:275
  process/controllers/RecommendController.cpp:682
  process/controllers/RecommendController.cpp:686
  process/controllers/RecommendController.cpp:1030

sim_list
  process/controllers/DocumentsController.cpp:588

similar
  process/controllers/TopicController.cpp:194

similar_to
  process/controllers/TopicController.cpp:208
  process/controllers/TopicController.cpp:210
  process/controllers/DocumentsGetHandler.cpp:64

similar_to_image
  process/controllers/DocumentsGetHandler.cpp:148

snippet
  process/parsers/SelectParser.cpp:131

sort
  process/controllers/LogAnalysisController.cpp:54
  process/controllers/LogAnalysisController.cpp:56
  process/controllers/DocumentsSearchHandler.cpp:354

source
  process/controllers/LogAnalysisController.cpp:181

start
  process/controllers/TopicController.cpp:227

status
  process/controllers/StatusController.cpp:54
  process/controllers/StatusController.cpp:63
  process/controllers/StatusController.cpp:79
  process/controllers/StatusController.cpp:85

sub_labels
  process/renderers/DocumentsRenderer.cpp:248
  process/renderers/DocumentsRenderer.cpp:318
  process/renderers/DocumentsRenderer.cpp:363

summary
  process/parsers/SelectParser.cpp:120

summary_property_alias
  process/parsers/SelectParser.cpp:128

summary_sentence_count
  process/parsers/SelectParser.cpp:124

system_events
  process/controllers/LogAnalysisController.cpp:175

taxonomy
  process/controllers/DocumentsSearchHandler.cpp:680

taxonomy_label
  process/parsers/SearchParser.cpp:108
  process/parsers/SearchParser.cpp:119

timestamp
  process/controllers/LogAnalysisController.cpp:183
  process/controllers/LogAnalysisController.cpp:261
  process/controllers/LogAnalysisController.cpp:277
  process/controllers/LogAnalysisController.cpp:369
  process/controllers/LogAnalysisController.cpp:373
  process/controllers/LogAnalysisController.cpp:381

top_k_count
  process/controllers/DocumentsSearchHandler.cpp:102
  process/controllers/DocumentsSearchHandler.cpp:189

topic
  process/controllers/TopicController.cpp:181
  process/controllers/TopicController.cpp:257

total_count
  process/controllers/AutoFillController.cpp:101
  process/controllers/DocumentsSearchHandler.cpp:101
  process/controllers/DocumentsSearchHandler.cpp:188
  process/controllers/DocumentsGetHandler.cpp:53
  process/controllers/DocumentsGetHandler.cpp:95
  process/controllers/DocumentsGetHandler.cpp:136
  process/controllers/DocumentsGetHandler.cpp:202
  process/controllers/DocumentsGetHandler.cpp:463

ts
  process/controllers/TopicController.cpp:182

type
  process/parsers/CustomRankingParser.cpp:139
  process/renderers/DocumentsRenderer.cpp:264

use_original_keyword
  process/parsers/SearchParser.cpp:243

use_synonym_extension
  process/parsers/SearchParser.cpp:244

user_queries
  process/controllers/LogAnalysisController.cpp:245
  process/controllers/LogAnalysisController.cpp:311
  process/controllers/LogAnalysisController.cpp:316
  process/controllers/LogAnalysisController.cpp:319

value
  core/common/parsers/ConditionParser.cpp:50
  core/common/parsers/ConditionParser.cpp:57
  core/common/parsers/ConditionParser.cpp:64
  process/parsers/SearchParser.cpp:142
  process/parsers/CustomRankingParser.cpp:140
  process/parsers/CustomRankingParser.cpp:147
  process/parsers/CustomRankingParser.cpp:152
  process/controllers/RecommendController.cpp:198

weight
  process/controllers/RecommendController.cpp:1109

*/
