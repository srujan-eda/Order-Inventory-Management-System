#include "../include/Inventory.h"
#include <iostream>

bool Inventory::addProduct(const Product &product){
    if(products.find(product.getID())!=products.end()) return false;
    products.emplace(product.getID(),product);
    return true;
}

bool Inventory::removeProduct(int id){
    if(products.find(id)==products.end()) return false;
    products.erase(id);
    return true;
}

Product* Inventory::findProduct(int id){
    auto it=products.find(id);
    if(it==products.end()) return nullptr;
    return &(it->second);
}

bool Inventory::updateStock(int id,int quantity){
    Product *product=findProduct(id);
    if(!product) return false;
    product->increaseStock(quantity);
}

void Inventory::displayInventory()const{
    for (const auto &it : products){
        const Product &product = it.second;

        std::cout << "ID: " << product.getID()
                  << ", Name: " << product.getName()
                  << ", Price: " << product.getPrice()
                  << ", Stock: " << product.getStock()
                  << '\n';
    }
}



