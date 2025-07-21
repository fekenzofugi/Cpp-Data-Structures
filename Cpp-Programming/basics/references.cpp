#include <iostream>

// References (Second use of & symbol)
// The primary use of references is the pass-by-reference argument in functions.

int main() {

  int x = 42;
  // "int&" is the full type, for a reference type.
  int& ref = x;

  int* y = nullptr;
  int*& ref2 = y; // illegal to ref null pointer.

  std::cout << "x value  :" << x << std::endl;
  std::cout << "x address:" << &(x) << std::endl;

  std::cout << "ref value  :" << ref << std::endl;
  std::cout << "ref address:" << &(ref) << std::endl;

  return 0;
}
