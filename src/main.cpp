#include <iostream>
#include "../include/Product.h"
#include "../include/Inventory.h"

int main(){
    Inventory inventory;

    Product mouse(101, "Wireless Mouse", 799.0, 10);
    Product keyboard(102, "Keyboard", 1499.0, 5);

    std::cout << inventory.addProduct(mouse) << '\n';
    std::cout << inventory.addProduct(keyboard) << '\n';

    // Adding mouse again will 
    std::cout << inventory.addProduct(mouse) << '\n';

    inventory.updateStock(101, 5);

    inventory.displayInventory();

    return 0;
}