#include <iostream>

// Address Of Operator (&)
// returns the address of a variable or function value in memory.
void foo() {

}

int main() {
  int x = 42;
  float y = 72;
  char a = 'a';
  signed char b = 'b';
  unsigned char c = 'c';

  std::cout << "x: " << &(x) << std::endl; // address in hexadecimal in RAM
  std::cout << "x's size: " << sizeof(int) << " bytes" << std::endl;
  std::cout << "y: " << &(y) << std::endl;
  std::cout << "a: " << (void*)&(a) << std::endl;
  std::cout << "b: " << (void*)&(b) << std::endl;
  std::cout << "c: " << (void*)&(c) << std::endl;
  std::cout << "foo: " << (void*)&(foo) << std::endl;
  std::cout << "main: " << (void*)&(main) << std::endl;

  return 0;
}
