#ifndef PRODUCT_HPP
#define PRODUCT_HPP
#include <string>

class Product {
private:
    std::string id;
    std::string name;
    // std::string category;
    double price;
public:
    Product(std::string name , std::string id , double price);

    std::string getId() const;
    std::string getName() const;
    double getPrice() const;

    void setPrice(double amt);
};

#endif