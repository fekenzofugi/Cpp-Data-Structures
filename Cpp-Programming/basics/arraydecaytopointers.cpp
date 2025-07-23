#include <iostream>
#include <array>
#include <vector>

/*void PrintArray(std::array<int, 5> arr, size_t size) {
  for(int i = 0; i < size; i++) {
    std::cout << arr[i] << std::endl;
  }
}*/

void PrintArray(std::vector<int> vector) {
  for(int i = 0; i < vector.size(); i++) {
    std::cout << vector[i] << std::endl;
  }
}

int main() {
  
  // ARRAYS ARE STATIC
  //int array[] = {1, 3, 5, 7, 9};
  //std::array<int, 5> array = {1, 3, 5, 7, 9};
  //PrintArray(array, sizeof(array) /sizeof(int));
  
  // VECTOR ARE DYNAMIC
  std::vector<int> vec = {1, 3, 5, 7, 9};
  PrintArray(vec);
  
  return 0;
}
