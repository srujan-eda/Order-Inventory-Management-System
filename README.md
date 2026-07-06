# Order and Inventory Management System

A modular C++ application for managing products, inventory, and customer orders with stock validation.

## Features

* Add, remove, search, and update products in inventory
* Efficient product lookup using `std::unordered_map`
* Create orders containing multiple products
* Validate product availability and stock before placing an order
* Prevent partial stock updates when an order cannot be fulfilled
* Track and display successfully placed orders

## Project Structure

```text
Order-Inventory-Management-System/
├── include/
│   ├── Product.h
│   ├── Inventory.h
│   ├── Order.h
│   └── OrderManager.h
├── src/
│   ├── Product.cpp
│   ├── Inventory.cpp
│   ├── Order.cpp
│   ├── OrderManager.cpp
│   └── main.cpp
├── .gitignore
└── README.md
```

## Design

The project is divided into four main components:

* `Product` stores product information and manages stock changes.
* `Inventory` manages products using an `unordered_map` for efficient lookup by product ID.
* `Order` stores a collection of requested products and quantities.
* `OrderManager` validates orders, updates inventory, and stores successfully placed orders.

## Data Structures and Complexity

| Operation                     | Data Structure  | Average Time Complexity |
| ----------------------------- | --------------- | ----------------------- |
| Add product                   | `unordered_map` | O(1)                    |
| Search product by ID          | `unordered_map` | O(1)                    |
| Remove product                | `unordered_map` | O(1)                    |
| Update stock                  | `unordered_map` | O(1)                    |
| Add item to order             | `vector`        | O(1) amortized          |
| Validate and process an order | `vector`        | O(k)                    |

Here, `k` is the number of items in an order.

## Order Processing

Orders are processed using a two-pass approach:

1. Validate that every requested product exists and has sufficient stock.
2. Deduct stock only after the entire order has passed validation.

This prevents partial inventory updates when one item in an order cannot be fulfilled.

## Build and Run

Compile from the project root:

```bash
g++ src/*.cpp -o order_system
```

Run on Windows:

```bash
./order_system.exe
```

## Technologies Used

* C++
* Object-Oriented Programming
* STL (`unordered_map`, `vector`)
* Git and GitHub
