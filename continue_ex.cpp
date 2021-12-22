// continue loop example
#include <iostream>
using namespace std;

int main ()
{
  for (int n=10; n>0; n--) {
      // Used to skip 5 here
    if (n==5) continue;
    cout << n << ", ";
  }
  cout << "liftoff!\n";
}