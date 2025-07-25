#include <iostream>
#include <array>
#include <algorithm>

int main() {
  /*
  int arr[] = {1, 3, 5};

  std::array<int, 3> arr2{1, 3, 5};

  for(int i = 0; i < arr2.size(); i = i + 1) {
    std::cout << arr2[i] << std::endl;
  }

  // range-based for loops
  for(int element: arr2) {
    std::cout << element << std::endl;
  }
  
  int countdown = 3;
  while(countdown > 0) {
    std::cout << countdown << std::endl;
    countdown--;
  }

  countdown = 3;
  do {
    std::cout << countdown << std::endl;
    countdown--;
  } while(countdown > 0);
  */ 
  std::array<int, 3> arr;
  std::fill(std::begin(arr), std::end(arr), 1024);
  for(int element:arr) {
    std::cout << element << std::endl;
  }
  return 0;
}
