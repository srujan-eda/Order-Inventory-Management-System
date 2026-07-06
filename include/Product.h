#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product
{
private:
    int id;
    std::string name;
    double price;
    int stock;

public:

    Product(int id,std::string name,double price,int stock);

    int getID() const;

    std::string getName() const;

    double getPrice() const;

    int getStock() const;

    void increaseStock(int quantity);

    void decreaseStock(int quantity);
};

#endif