#include <iostream>
#include "Sales_item.h"

// This definitely doesn't work as I wish it to.
int main() {
    Sales_item book;
    // read until end-of-file, calculating a running total of all values read
    Sales_item total_book;
    while (std::cin >> book) {
        total_book += book;
    }
    std::cout << total_book << std::endl;
    return 0;
}