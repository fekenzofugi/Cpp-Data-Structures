#include <iostream>
#include <numeric>
#include <iterator>
#include <array>

int main() {
  
  std::array<int, 100> ids; // or int ids[100];

  std::iota(std::begin(ids), std::end(ids), 0);

  for(int i = 0; i < 100; i++) {
    std::cout << ids[i] << std::endl;
  }

  ids.at(1000) = 9;

  return 0;
}
