#include "customer_profile.hpp"
#include "product.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

CustomerProfile::CustomerProfile(string customerId , double amt){
    this->customerId=customerId;
    balance=amt;
}

void CustomerProfile::setUtility(const string& productId , double utility){
    if(hasRatingFor(productId)){
        int ok;
        cout<<"Do you want to replace the utility score from "<<productUtilities[productId]<<
        " to "<<utility<<" ? Enter 0 for no and 1 for yes"<<endl;
        cin>>ok;
        if(!ok)return;
    }
    productUtilities[productId]=utility;
}

double CustomerProfile::getUtilityForProduct(const Product& product){
    string id = product.getId();
    return productUtilities[id];
};

bool CustomerProfile::hasRatingFor(const string& productId)const{
    if(productUtilities.find(productId)==productUtilities.end()) return false;
    return true;
}

void CustomerProfile::setBalance(double amt){ balance=amt;}

double CustomerProfile::getBalance()const{return balance;}