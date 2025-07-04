#include "product.hpp"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

Product::Product(string name , string id , double price){
    this->name=name;
    this->id=id;
    this->price=price;
}

string Product::getId()const{return id;}

string Product::getName()const{return name;}

double Product::getPrice()const{return price;}

void Product::setPrice(double amt){price=amt;}