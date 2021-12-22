#include <iostream>
int main() {
    // ex1.9 as a for loop
    int sum = 0;
    for (int val = 1; val <= 100; ++val)
        sum += val;
    std::cout << "The sum total of numbers from " << 50
    << " to " << 100 << " inclusive is " << sum << std::endl;

    // ex1.10 as a for loop
    for (int val = 10; val >= 0; --val)
        std::cout << val << std::endl;

    // ex1.11 as a for loop
    std::cout << "Input two numbers, smallest number first:" << std::endl;
    int lower = 0, upper = 0;
    std::cin >> lower >> upper;
    for (int val = lower; val <= upper; ++val)
        std::cout << val << std::endl;
}