#ifndef UTILITY_MANAGER_HPP
#define UTILITY_MANAGER_HPP
#include <string>
#include <map>
#include <vector>

class CustomerProfile;
class Product;

class UtilityManager {
private:
    CustomerProfile& profile;
    std::vector<Product>& allProducts;
    double defaultUtility;
    
public:
    UtilityManager(CustomerProfile& profile, vector<Product>& allProd);
    
    void collectUtilitiesFromUser(); // Interactive rating
    double getUtilityFor(const Product& product);
    void updateUtilitesFromUser(Product& product , double utility);
    
private:
    void displayProductForRating(const Product& prod)const;
    double getUtilityInput();
};

#endif