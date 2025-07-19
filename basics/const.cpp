#include <iostream>

int main() {
  const double PI = 3.14; // const = immutable = read-only
  constexpr int expression = 10 + 10 + 4;

  std::cout << PI << std::endl;
  std::cout << expression << std::endl;
  return 0;
}
