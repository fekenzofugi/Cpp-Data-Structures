#include "Array.hpp"
#include <iostream>

Array::Array() {
  std::cout << "Constructor" << std::endl;
  data = new int[10];
  for(int i = 0; i<10; i++) {
    data[i] = i*i;
  }
}

Array::~Array() {
  delete[] data;
}

// Copy Constructor
// Array myNewArray = someExistingArray
Array::Array(const Array& rhs){
  std::cout << "Copy Constructor" << std::endl;
  data = new int[10];
  for(int i=0; i<10; i++) {
    data[i] = rhs.data[i];
  }
}

// Copy Assigment Operator
// Object is already constructred, we are just making a copy later (e.g. myArray2 = myArray)
Array& Array::operator=(const Array& rhs) {
  std::cout << "Copy Assignment Operator" << std::endl;
  if(&rhs == this) { // this is the current instance of the class.
    return *this;
  }
  delete[] data;
  data = new int[10];
  for(int i=0; i<10; i++) {
    data[i] = rhs.data[i];
  }
  return *this;
}

void Array::PrintingData() {
  for(int i=0; i<10; i++) {
    std::cout << data[i] << std::endl;
  }
}

void Array::SetData(int index, int value) {
  data[index] = value;
}

