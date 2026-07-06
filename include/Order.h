#ifndef ORDER_H
#define ORDER_H
#include <vector>

struct OrderItem{
    int productID;
    int quantity;
};

class Order{
private:
    int orderID;
    std::vector<OrderItem> items;
public:
    Order(int orderID);

    int getOrderID() const;

    void addItem(int productID,int quantity);

    const std::vector<OrderItem> &getOrder() const;

};
#endif