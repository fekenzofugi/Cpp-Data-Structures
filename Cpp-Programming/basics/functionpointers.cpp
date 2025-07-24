#include <iostream>
#include <functional>

// Function Pointer are used to create callback functions.

typedef int (*PFIntegerOperations)(int, int);

int add(int x, int y) {
  return x + y;
}

int multiply(int x, int y) {
  return x * y;
}

int main() {
  
  // Function Pointer for functions: int name(int, int)
  // int (*op)(int, int);
  // PFIntegerOperations op;
  std::function<int(int, int)> op;
  
  std::cout << "type 1 for add and 2 for multiply: ";
  int n;
  std::cin >> n;

  if(n == 1) {
    op = add;
  } else if(n == 2) {
    op = multiply;
  }

  int x,y;
  std::cin >> x;
  std::cin >> y;

  std::cout << "Operation: " << op(x, y) << std::endl;

  return 0;
}
