#include <iostream>
#include "../include/Product.h"

int main(){
    Product mouse(101,"wireless mouse",799.00,10);

    std::cout<<"ID "<<mouse.getID()<<'\n';
    std::cout<<"Name "<<mouse.getName()<<'\n';
    std::cout<<"Price "<<mouse.getPrice()<<'\n';
    std::cout<<"Stock "<<mouse.getStock()<<'\n';

    mouse.increaseStock(5);
    std::cout<<"Stock "<<mouse.getStock()<<'\n';

    mouse.decreaseStock(10);
    std::cout<<"Stock "<<mouse.getStock()<<'\n';
    
    return 0;
}