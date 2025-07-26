#include <iostream>
#include "Student.hpp"

/*Class is a User-Defined-Type (UDT)
1) Information Hiding (public, private and protected).
2) Ability to create instances of objects and think in objects in our software.
*/

/* Default on Classes 
1) We get a 'default constructor' and a 'default destructor'. That don't take any parameters. But we can override these.
*/

int main() {
  std::cout << "program starts" << std::endl;

  // An instance of a 'student'
  Student fernando("fernando"); // stack
  Student* fernando2 = new Student; // heap
  delete fernando2;

  std::cout << "program ends" << std::endl;
  return 0;
}
