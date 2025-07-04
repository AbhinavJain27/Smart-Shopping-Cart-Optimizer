// customer_profile.h
#ifndef CUSTOMER_PROFILE_HPP
#define CUSTOMER_PROFILE_HPP
#include <string>
#include <map>

class Product;

class CustomerProfile {
private:
    std::string customerId;
    std::map<std::string, double> productUtilities; // productID -> utility
    double balance;
    
public:
    CustomerProfile(std::string customerId , double amt);
    void setUtility(const std::string& productId, double utility);
    double getUtilityForProduct(const Product& product);
    bool hasRatingFor(const std::string& productId) const;

    void setBalance(const double amt);
    double getBalance()const;
};


#endif