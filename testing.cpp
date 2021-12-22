#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item book;
    std::cin >> book; 
    std::cout << book.isbn();
    return 0;
}