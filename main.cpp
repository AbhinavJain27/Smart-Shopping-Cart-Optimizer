#include "shopping_optimizer.hpp"
#include "discount_rules.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    // 1. Load products
    std::vector<Product> products = loadProducts();
    
    // 2. Initialize customer profile
    CustomerProfile profile("customer123");
    if (profileFileExists()) {
        profile.loadFromFile("customer123.profile");
    }
    
    // 3. Utility collection
    UtilityManager utilityManager(profile, products);
    utilityManager.collectUtilitiesFromUser();
    profile.saveToFile("customer123.profile");
    
    // 4. Get budget
    double budget = getUserBudget();
    
    // 5. Optimize with personalized utilities
    ShoppingOptimizer optimizer(products, budget);
    auto optimalSelection = optimizer.findOptimalSelection(utilityManager);
    
    // 6. Display results
    printResults(optimalSelection, utilityManager);
}