#include  <iostream>
#include "Vector3f.hpp"
/* 
Classes and Structs are user-defined types, defined by class-specifier.
For both classes and structs the keywords are identical EXCEPT for the
default MEMBER ACCESS and the default BASE CLASS ACCESS.

The default access for classes are PRIVATE.
The default access for structs are PUBLIC.

C++ in built on top of C which have Structs.
*/

std::ostream& operator<<(std::ostream& os, const Vector3f& obj) {
  os << obj.x << ',' << obj.y << ',' << obj.z;
  return os;
}

int main() {
  Vector3f myVector1;

  std::cout << myVector1 << std::endl;

  return 0;
}
