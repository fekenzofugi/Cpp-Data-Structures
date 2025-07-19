#include <iostream>

// Forward Declared
// Function Declaration
int add(int a, int b);
float add(float a, float b); // or auto add(float a, float b) -> float;

// Declared and Defined
void print(void) {
  std::cout << "hello" << std::endl;
}

int main() {
  
  std::cout << add(1, 2) << std::endl;
  std::cout << add(1.2f, 1.4f) << std::endl;

  print();

  return 0;
}

int add(int a, int b) {
  std::cout << "int add(int a, int b)" << std::endl;
  return a+b;
}

float add(float a, float b) {
  std::cout << "float add(float b, float b)" << std::endl;
  return a+b;
}

