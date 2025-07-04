// dp_state.h
#ifndef DP_STATE_HPP
#define DP_STATE_HPP
#include <vector>
#include <iostream>

class Product;

struct DPState {
    double total_cost;
    double total_utility;
    std::vector<Product> selected_items;

    // Constructor for easy initialization
    DPState(double cost = 0.0, double utility = 0.0, std::vector<Product> items = {})
        : total_cost(cost), total_utility(utility), selected_items(std::move(items)) {}

    // Helper to print state (useful for debugging)
    void print() const {
        std::cout << "Cost: $" << total_cost 
                  << " | Utility: " << total_utility
                  << " | Items: ";
        for (const auto& item : selected_items) {
            std::cout << item.getName() << ", ";
        }
        std::cout << "\n";
    }
};

#endif