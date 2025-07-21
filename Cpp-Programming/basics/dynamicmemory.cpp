#include <iostream>

// HEAP Memory: Dynamic Memory Allocation with new and delete.
// Allows us to allocate resources at runtime. This resource is returned to us in a pointer.

int main() {

  int numberOfStudents = 0;

  std::cout << "How many students in our class?" << std::endl;
  std::cin >> numberOfStudents;

  int* studentIds = new int[numberOfStudents];

  for(int i = 0; i < numberOfStudents; i++) {
    studentIds[i] = i;
  }

  delete[] studentIds; // Free Memory: Very important, otherwise we're gonna lose information.

  return 0;
}
