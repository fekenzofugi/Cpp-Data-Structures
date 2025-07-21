#include <iostream>
#include <vector>
#include <algorithm>

// Uses of Const
// 1) Read Only data
// 2) Safety - Ensure that the functions don't change the data

// Function with Const Param
void PassByReference(const std::vector<int>& ref) {
  ref[0] = 0;
}

int main() {
  const double PI = 3.14; // const = immutable = read-only
  constexpr int expression = 10 + 10 + 4;

  std::cout << PI << std::endl;
  std::cout << expression << std::endl;

  std::vector<int> x(100000000);
  
  PassByReference(x);
  
  return 0;
}
