#include <iostream>
int main()
{
    // print statment followed by a buffer flush
    std::cout << "Enter two numbers:" << std::endl;
    // You need to initialise values before changing them
    int v1 = 0, v2 = 0;
    // inputting new values for the numbers
    std::cin >> v1 >> v2;
    // Printing the sum, flushing the buffer
    std::cout << "The sum of " << v1 << " and " << v2
    << " is " << v1 + v2 << std::endl;
}