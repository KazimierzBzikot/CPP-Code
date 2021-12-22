#include <iostream>

int main() {
    int x {0};
    std::cin >> x;
    switch (x) {
    case 1:
    case 2:
    case 3:
        std::cout << "x is 1, 2 or 3";
        break;
    default:
        std::cout << "x is not 1, 2 nor 3";
    }
}