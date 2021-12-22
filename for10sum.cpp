#include <iostream>
int main()
{
int sum = 0;
// sum values from 1 through 10 inclusive
// init statment; condition; expression
// val is initialised and exists only within the for loop
// The expression ++val is executed after the for-body
// and then the condition is tested after the expression executes
// and the for loop continues until the expression fails
for (int val = 1; val <= 10; ++val)
    sum += val; // equivalent to sum = sum + val
    std::cout << "Sum of 1 to 10 inclusive is "
    << sum << std::endl;
// A For loop's region of influence is not clearly defined by {} like If or While loops
// which deeply annoys me. I'm going to have to be careful with indents when using for loops
std::cout << "cock";
}