// passing parameters by reference
#include <iostream>
using namespace std;
// the & after the type references the values; so it can update them using the function
// it "passes by references, not by value". Remove the &'s and you don't double the inputs.
// Arguments by reference do not require a copy- therefore are more efficient
/*
* You can ensure the inputs of a function are referenced, but not altered by defining them as constants;
* string concatenate (const string& a, const string& b) {
*   return a+b;
* }
*/
void duplicate (int& a, int& b, int& c)
{
  a*=2;
  b*=2;
  c*=2;
}

int main ()
{
  int x=1, y=3, z=7;
  duplicate (x, y, z);
  cout << "x=" << x << ", y=" << y << ", z=" << z;
  return 0;
}