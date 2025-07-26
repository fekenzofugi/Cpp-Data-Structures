#include "Array.hpp"
#include <iostream>

Array::Array() {
  std::cout << "Constructor" << std::endl;
  for(int i = 0; i<10000; i++) {
    data.push_back(i);
  }
}

Array::~Array() {
}

// Copy Constructor
// Array myNewArray = someExistingArray
Array::Array(const Array& rhs){
  std::cout << "Copy Constructor" << std::endl;
  for(int i=0; i<rhs.data.size(); i++) {
    data.push_back(rhs.data[i]);
  }
}

// Copy Assigment Operator
// Object is already constructred, we are just making a copy later (e.g. myArray2 = myArray)
Array& Array::operator=(const Array& rhs) {
  std::cout << "Copy Assignment Operator" << std::endl;
  if(&rhs == this) { // this is the current instance of the class.
    return *this;
  }

  data.clear();
  for(int i=0; i<rhs.data.size(); i++) {
    data.push_back(rhs.data[i]);
  }
  return *this;
}

void Array::PrintingData() {
  for(int i=0; i<data.size(); i++) {
    std::cout << data[i] << std::endl;
  }
}

void Array::SetData(int index, int value) {
  data[index] = value;
}

