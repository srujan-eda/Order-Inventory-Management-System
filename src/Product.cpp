#include "../include/Product.h"

Product::Product(int id,std::string name,double price,int stock){
    this->id=id;
    this->name=name;
    this->price=price;
    this->stock=stock;
}

int Product::getID()const{
    return id;
}

std::string Product::getName()const{
    return name;
}

double Product::getPrice()const{
    return price;
}

int Product::getStock()const{
    return stock;
}

void Product::increaseStock(int quantity){
    stock+=quantity;
}

void Product::decreaseStock(int quantity){
    if(stock<quantity ||quantity<0) return;
    stock-=quantity;
}