#include <iostream>
int main()
{
int sum = 0, value = 0;
// read until end-of-file, calculating a running total of all values read
while (std::cin >> value)
    sum += value; // equivalent to sum = sum + value
std::cout << "Sum is: " << sum << std::endl;
return 0;
}
// Will sum numbers seperated by spaces until it encounters and erroneous value i.e. a string