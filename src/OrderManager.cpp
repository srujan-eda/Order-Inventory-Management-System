#include "../include/OrderManager.h"
#include <iostream>

bool OrderManager::placeOrder(const Order &order,Inventory &inventory){
    for(const OrderItem &item:order.getItems()){
        Product* product=inventory.findProduct(item.productID);

        if(!product) return false;
        if(product->getStock()<item.quantity) return false;
    }

    for(const OrderItem &item:order.getItems()){
        Product* product=inventory.findProduct(item.productID);

        product->decreaseStock(item.quantity);
    }
    orders.push_back(order);
    return true;
}

void OrderManager::displayOrders() const{
    for(const Order &order:orders){
        std::cout<<"Order ID: "<<order.getOrderID()<<'\n';
        for(const OrderItem &item:order.getItems()){
            std::cout<<"Product ID: "<<item.productID
            <<", Quantity: "<<item.quantity<<'\n';
        }
    }
}