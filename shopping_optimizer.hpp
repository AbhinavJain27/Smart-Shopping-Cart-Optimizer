#ifndef SHOPPING_OPTIMIZER_HPP
#define SHOPPING_OPTIMIZER_HPP
#include <string>
#include <vector>

class DPState;
// Updated DP calculation to use personalized utilities
DPState* ShoppingOptimizer::solveWithBitmaskDP(const UtilityManager& utilityManager) {
    // ... same bitmask structure as before ...
    
    // Modified utility calculation:
    double newUtility = dp[mask].utility + utilityManager.getUtilityFor(allProducts[i]);
    
    // ... rest remains the same ...
}

#endif