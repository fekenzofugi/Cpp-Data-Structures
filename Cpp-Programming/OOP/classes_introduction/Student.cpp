#include "Student.hpp"
#include <iostream>
#include <string>

// Action - Constructor
Student::Student() {
  m_name = "no name";
  std::cout << "Constructor" << std::endl;
  std::cout << "m_name is " << m_name << std::endl;
}

Student::Student(std::string name){
  m_name = name;
  std::cout << "Constructor" << std::endl;
  std::cout << "m_name is " << m_name << std::endl;
}

// Action - Destructor
Student::~Student() {
  std::cout << "Destructor" << std::endl;
}

void Student::printName() {
  std::cout << "name is " << m_name << std::endl;
}
