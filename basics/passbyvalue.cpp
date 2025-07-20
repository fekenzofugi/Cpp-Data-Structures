#include <iostream>


// Pass-by-value: We make copies of our arguments when passed in functions.
 void SetValue(int arg) {
  std::cout << "SetValue: arg initially is " << arg << std::endl;
  std::cout << "arg's addr is " << &(arg) << std::endl;
  arg = 9999;
  std::cout << "SetValue: arg at the end is " << arg << std::endl;
}

int main() {

  int x = 42;
  std::cout << "x's value is " << x << std::endl;
  std::cout << "x's addr is " << &(x) << std::endl;
  
  // Call our function
  SetValue(x);

  // Check x's value
  std::cout << "x's value is " << x << std::endl;
  std::cout << "x's addr is " << &(x) << std::endl;

  return 0;

}
