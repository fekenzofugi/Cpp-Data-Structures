#include <iostream>

// A pointer is a variable that stores the memory address of another variable.
// A reference is an alias or an alternative name for an already existing variable. It directly refers to the same memory location as the original variable. 

// Use pointers for share a data, and access it from multiple sources that point to it.


int main() {
  int x = 7;
  int* px = &x;
  int* px2 = &x;

  // Update x
  x = 9;

  std::cout << "x stores        :" << x << std::endl; // 4 bytes
  std::cout << "x addr          :" << &(x) << std::endl;
  std::cout << "px stores       :" << px << std::endl;
  std::cout << "px addr         :" << &(px) << std::endl;
  // Dereference: Retrieve the value of the type we point to.
  std::cout << "px dereferenced :" << *px << std::endl;
  std::cout << "px2 stores      :" << px2 << std::endl;
  std::cout << "px2 dereferenced:" << *px2 << std::endl;

  int y = 7;
  int* py = &y;
  *py = 42;
  std::cout << "y stores: " << y << std::endl;

  return 0;
}
