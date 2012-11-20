/**
 * @file ProductScorerFactory.h
 * @brief create ProductScorer instance.
 * @author Jun Jiang
 * @date Created 2012-10-28
 */

#ifndef SF1R_PRODUCT_SCORER_FACTORY_H
#define SF1R_PRODUCT_SCORER_FACTORY_H

#include <string>
#include <boost/shared_ptr.hpp>

namespace sf1r
{
class ProductScorer;
class CustomRankManager;
class GroupLabelLogger;
class ProductRankingConfig;
class MiningManager;
class ProductScoreConfig;
class SearchManager;

namespace faceted
{
class PropValueTable;
class PropSharedLockSet;
}

class ProductScorerFactory
{
public:
    ProductScorerFactory(
        const ProductRankingConfig& config,
        MiningManager& miningManager);

    /**
     * create the @c ProductScorer instance, it sums up weighted scores
     * from @c CustomScorer, @c CategoryScorer, and @p relevanceScorer, etc.
     * @param query used to create @c CustomScorer and @c CategoryScorer.
     * @param propSharedLockSet used to concurrently access category data
     *        by @c CategoryScorer.
     * @param relevanceScorer if not NULL, it would be added into return value.
     * @return the @c ProductScorer instance, it should be deleted by caller.
     */
    ProductScorer* createScorer(
        const std::string& query,
        faceted::PropSharedLockSet& propSharedLockSet,
        ProductScorer* relevanceScorer);

private:
    ProductScorer* createScorerImpl_(
        const ProductScoreConfig& scoreConfig,
        const std::string& query,
        faceted::PropSharedLockSet& propSharedLockSet,
        ProductScorer* relevanceScorer);

    ProductScorer* createCustomScorer_(
        const ProductScoreConfig& scoreConfig,
        const std::string& query);

    ProductScorer* createCategoryScorer_(
        const ProductScoreConfig& scoreConfig,
        const std::string& query,
        faceted::PropSharedLockSet& propSharedLockSet);

    ProductScorer* createRelevanceScorer_(
        const ProductScoreConfig& scoreConfig,
        ProductScorer* relevanceScorer);

    ProductScorer* createPopularityScorer_(
        const ProductScoreConfig& scoreConfig);

    ProductScorer* createNumericPropertyScorer_(
        const ProductScoreConfig& scoreConfig);

private:
    const ProductRankingConfig& config_;

    CustomRankManager* customRankManager_;

    GroupLabelLogger* categoryClickLogger_;

    const faceted::PropValueTable* categoryValueTable_;

    boost::shared_ptr<SearchManager> searchManager_;
};

} // namespace sf1r

#endif // SF1R_PRODUCT_SCORER_FACTORY_H