#include <iostream>
#include "../include/Inventory.h"
#include "../include/Order.h"
#include "../include/OrderManager.h"

int main()
{
    Inventory inventory;
    OrderManager orderManager;

    Product mouse(101, "Wireless Mouse", 799.0, 10);
    Product keyboard(102, "Keyboard", 1499.0, 5);

    inventory.addProduct(mouse);
    inventory.addProduct(keyboard);

    Order order1(5001);
    order1.addItem(101, 2);
    order1.addItem(102, 1);

    bool placed = orderManager.placeOrder(order1, inventory);

    std::cout << "Order placed: " << placed << '\n';

    std::cout << "\nInventory after order:\n";
    inventory.displayInventory();

    std::cout << "\nSuccessful orders:\n";
    orderManager.displayOrders();

    Order order2(5002);
    order2.addItem(102, 10);  // Keyboard does NOT have enough
    order2.addItem(101, 2);   // Mouse has enough
    
    bool placed2 = orderManager.placeOrder(order2, inventory);

    std::cout << "\nSecond order placed: " << placed2 << '\n';

    std::cout << "\nInventory after failed order:\n";
    inventory.displayInventory();
    
    return 0;
}