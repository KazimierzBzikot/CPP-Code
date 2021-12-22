#include <iostream>
int main() {
    std::cout << "Input two numbers, smallest number first:" << std::endl;
    int lower = 0, upper = 0;
    std::cin >> lower >> upper;
    while (lower != upper + 1) {
        std::cout << lower << std::endl;
        ++ lower;
    }
}