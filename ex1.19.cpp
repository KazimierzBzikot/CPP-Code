#include <iostream>
int main() {
    std::cout << "Input two numbers:" << std::endl;
    int lower = 0, upper = 0;
    std::cin >> lower >> upper;
    if (lower < upper)
        while (lower != upper + 1) {
            std::cout << lower << std::endl;
            ++ lower;
        }
    else {
        while (upper != lower + 1) {
            std::cout << upper << std::endl;
            ++ upper;
        }
    }
}