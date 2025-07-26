#include "Array.hpp"

void passByRef(const Array& a) {
  
}

void passByVal(Array a) {

}

int main() {

  // Initialize all of our data
  Array myArray;

  myArray.SetData(0, 12345);
  
  // Copy contructor called
  Array myArray2 = myArray;
  for(int i=0; i<100; i++) {
    passByVal(myArray);
    passByRef(myArray);
  }

  return 0;
}
