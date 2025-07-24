#include <iostream>

int* returnResult() {

  int result = 42;
  return &result;
}

int main() {
  
  // 1) NULL POINTER Derenference
  /* int* px = nullptr;
  *px = 42; // Segmentation Fault: Derenference something that you don't have access to.
  */

  // 2) MEMORY LEAKS 
  // g++ -g -fsanitize=address -std=c++17 main.cpp -o prog
  // int* array = new int[1000];
  
  // 3) DANGLING POINTER
  /*int* px = returnResult();

  std::cout << "*px: " << *px << std::endl; */

  // 4) Double Free
  int* x = new int;
  *x = 42;
  delete x;
  delete x;

  return 0;
}
