#include <iostream>
#include "interface.hpp" // Always include header files never .cpp files.

/*
  1) #include 'path-to-interface'
  2) #include <> 
    * $ find /usr/include/ -name iostream
*/

int main() {
  std::cout << add(10, 12) << std::endl;

  return 0;
}
