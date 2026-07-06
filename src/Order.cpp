#include "../include/Order.h"

Order::Order(int orderID){
    this->orderID=orderID;
}

int Order::getOrderID() const{
    return orderID;
}

void Order::addItem(int productID,int quantity){
    OrderItem item;
    if(quantity<=0) return;
    item.productID=productID;
    item.quantity=quantity;

    items.push_back(item);
}

const std::vector<OrderItem> &Order::getItems() const{
    return items;
}
