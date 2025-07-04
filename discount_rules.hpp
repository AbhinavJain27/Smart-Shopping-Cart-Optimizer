#ifndef DISCOUNT_RULES_HPP
#define DISCOUNT_RULES_HPP
#include <string>
#include <vector>

class Product;

class DiscountRules {
public:
    // Bundle discounts (buy X get Y discount)
    double checkBundleDiscounts(const std::vector<Product>& items);
    
    // Category-based discounts
    double checkCategoryDiscount(const std::vector<Product>& items);
    
    // Other discount rules
};

#endif