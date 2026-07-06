#ifndef INVENTORY_H
#define INVENTORY_H

#include "Product.h"

#include <unordered_map>

class Inventory
{
private:
    std::unordered_map<int,Product> products;

public:
    bool addProduct(const Product &product);

    bool removeProduct(int id);

    Product* findProduct(int id);

    bool updateStock(int id, int quantity);

    void displayInventory() const;
};

#endif