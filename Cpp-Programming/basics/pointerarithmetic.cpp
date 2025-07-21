#include <iostream>

int main() {
  
  // Arrays are contiguous chunks of memory, where we can iterate through each item incrementing the pointers.
  int array[] = {1, 3, 5, 7, 9};
  int* px = array;

  std::cout << "array[0]     : " << array[0] << std::endl;
  std::cout << "array[0] addr: " << &array[0] << std::endl;
  std::cout << std::endl;
  
  std::cout << "array   :" << array << std::endl; // points to the first element
  std::cout << "px      : " << px << std::endl;
  std::cout << "px deref: " << *px << std::endl;
  std::cout << std::endl;
  // Increment px: Whenever we increment a pointer the size of the incrementation is the size of the datatype, in this case is the sizeof int = 4 bytes.
  px++;
  std::cout << "px      : " << px << std::endl;
  std::cout << "px deref: " << *px << std::endl;
  std::cout << std::endl;

  px++;
  std::cout << "px      : " << px << std::endl;
  std::cout << "px deref: " << *px << std::endl;
   
  // Show the array offset: Moving through an array using pointer arithmetic
  int* px2 = array;
  std::cout << *(px2 + 0) << std::endl; // or *(array + offset) or array[index]
  std::cout << *(px2 + 1) << std::endl;
  std::cout << *(px2 + 2) << std::endl;
  std::cout << *(px2 + 3) << std::endl;
  std::cout << *(px2 + 4) << std::endl;
  
  // How brackets [] dereference addresses from array.
  std::cout << array[0] << std::endl; 
  std::cout << array[1] << std::endl;
  std::cout << array[2] << std::endl;
  std::cout << array[3] << std::endl;
  std::cout << array[4] << std::endl;

  return 0;
}
