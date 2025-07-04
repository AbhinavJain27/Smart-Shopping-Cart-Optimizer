#include "utility_manager.hpp"
#include "customer_profile.hpp"
#include "product.hpp"
#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

UtilityManager::UtilityManager(CustomerProfile& profile ,vector<Product>& allprod) :
     profile(profile) ,allProducts(allprod),  defaultUtility(0){}

void UtilityManager::displayProductForRating(const Product& prod) const {
    cout << "Name of the product: " << prod.getName() << endl;
    cout << "Price of the product: " << prod.getPrice() << endl;
}


double UtilityManager::getUtilityInput(){
    double utility;
    cout<<"Enter the utility rating for this product: "<<endl;
    cin>>utility;
    return utility;
}

double UtilityManager::getUtilityFor(const Product&product){
    displayProductForRating(product);
    double util = getUtilityInput();
    return util;
}

void UtilityManager::collectUtilitiesFromUser(){
    for(Product& product:allProducts){
        double result = getUtilityFor(product);
        updateUtilitesFromUser(product , result);
    }
}

void UtilityManager::updateUtilitesFromUser(Product& product , double utility){
    profile.setUtility(product.getId() , utility);
}