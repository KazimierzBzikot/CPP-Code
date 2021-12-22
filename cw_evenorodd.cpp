#include <string>
#include <iostream>
// This worked:
std::string even_or_odd(int number) {
  return number % 2 == 0 ? "Even" : "Odd";
}

int main() {
  int n {0};
  std::cout << "Enter a number\n";
  std::cin >> n;
  std::cout << n << " is " << even_or_odd(n) << std::endl;
}