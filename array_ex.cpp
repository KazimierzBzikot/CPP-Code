// arrays example
#include <iostream>
using namespace std;

int foo[] {16, 2, 77, 40, 12071};
int result {0};

int main ()
{
  for (int n {0}; n < 5; ++n)
  {
    result += foo[n];
  }
  cout << result;
  return 0;
}