#include <iostream>
#include <vector>

// sizeof returns the size of the data type.
int main() {
  // Local Variable (primitive type)
  int x = 8;

  // A pointer
  int* px = &x;

  // A STACK allocated array with fixed size
  int array[] = {1, 3, 5, 7, 9};

  // A HEAP allocated array
  int* dinamicallyAllocatedArray = new int[1000];

  // Vector
  std::vector<int> vec;

  // Output
  std::cout << "x                        : " << sizeof(x) << " Bytes" << std::endl;
  std::cout << "px                       : " << sizeof(px) << " Bytes" << std::endl; // Pointer: Always 8 bytes for a 64 bit Archtecture System.
  std::cout << "array                    : " << sizeof(array) << " Bytes" << std::endl;
  std::cout << "dinamicallyAllocatedArray: " << sizeof(dinamicallyAllocatedArray) << " Bytes" << std::endl; // Pointer: points to the first element of the array: 8 bytes for a 64 bit Archtecture System.
  std::cout << "vec                      : " << sizeof(vec) << " Bytes" << std::endl;
  std::cout << "vec elements             : " << vec.size() << " Bytes" << std::endl;

  return 0;
}
