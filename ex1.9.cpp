#include <iostream>
int main() {
    // initiate values for the sum and 1st value
    int sum = 0, val = 50;
    while (val <= 100) {
        // add value to sum using compound assignment
        sum += val;
        // increment the value by 1 using prefix increment
        ++val;
    }
    // print, std::endl could be left out here tbh
    std::cout << "The sum total of numbers from " << 50
    << " to " << val - 1 << " inclusive is " << sum << std::endl;
}