#include <iostream>

int main() {
  for (int i = 0; i < 3; i++) {
    std::cout << "Start Loop" << std::endl;
    continue;
    std::cout << "End Loop" << std::endl;
  }

  for (int i = 0; i < 3; i++) {
    std::cout << i << std::endl;
    if (i == 1) {
      break;
    }
  }

  return 0;
}
