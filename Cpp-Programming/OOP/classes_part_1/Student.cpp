#include "Student.hpp"
#include <iostream>

// Action - Constructor
Student::Student() {
  std::cout << "Constructor" << std::endl;
}

// Action - Destructor
Student::~Student() {
  std::cout << "Destructor" << std::endl;
}

void Student::printName() {
  std::cout << "name is " << m_name << std::endl;
}
