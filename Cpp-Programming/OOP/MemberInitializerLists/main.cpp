// Initialize Class
// 1) Construct Object (allocate memory)
// 2) Assign member values

// Member Initializer Lists
// 1) Construct Object (allocate memory) and Assign member values.

// Should my constructors use "initialization lists" or "assignment"?

#include <iostream>
#include "Vector3f.hpp"

std::ostream& operator<<(std::ostream& os, const Vector3f& obj) {
  os << obj.x << ',' << obj.y << ',' << obj.z;
  return os;
}

int main() {

  Vector3f myVector1;
  std::cout << myVector1 << std::endl;

  return 0;
}
