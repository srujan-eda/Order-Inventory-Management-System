#ifndef ORDERMANAGER_H
#define ORDERMANAGER_H
#include "Order.h"
#include "Inventory.h"
#include <vector>

class OrderManager{
private:
    std::vector<Order> orders;
public:
    bool placeOrder(const Order &order,Inventory &inventory);

    void displayOrders() const;
};
#endif