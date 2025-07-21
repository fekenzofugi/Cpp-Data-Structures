#include <iostream>
#include <vector>
#include <algorithm>

// Pass by Value
void PassByValue(std::vector<int> arg) {
  arg[0] = 1;
}

// Pass by Reference:
// 1) Mutable
// 2) Efficient
void PassByReference(std::vector<int>& ref) {
  ref[0] = 1;
}

int main() {
  std::vector<int> x(1000000000);
  std::fill(std::begin(x), std::end(x), 1);
  
  PassByValue(x);
  PassByReference(x);

  return 0;
}
