#include <iostream>

// global variables -> available everywhere -> dangerous
int x = 42;

int main() {
  
  {
    int x = 10;
  }

  {
    int x = 43;
  }

  return 0;
}
