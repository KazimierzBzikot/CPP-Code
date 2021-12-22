// my first pointer
#include <iostream>
using namespace std;

int main ()
{
  int firstvalue, secondvalue;
  // pointer initialised; type of value pointer addresses needs to be specified hence int *. 
  // mypointer is initialised to address firstvalue
  int * mypointer {&firstvalue};
  // * is dereference; *mypointer is setting the value of firstvalue
  *mypointer = 10;
  // mypointer reused to address secondvalue
  mypointer = &secondvalue;
  // sets the value for secondvalue
  *mypointer = 20;
  cout << "firstvalue is " << firstvalue << '\n';
  cout << "secondvalue is " << secondvalue << '\n';
  return 0;
}