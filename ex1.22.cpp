#include <iostream>
#include "Sales_item.h"

// Things never go as planned
int main() {
    Sales_item book;
    Sales_item total_book;
    while (std::cin >> book) {
        total_book += book;
    }
    // Odd that it doesn't print the isbn number even when I explicitly attempt to print it:
    std::cout << book.isbn() << " " << total_book << std::endl;
    return 0;
}