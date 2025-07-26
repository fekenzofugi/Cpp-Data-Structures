#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <string>

class Student { // Student - Our new user defined type
  public: 
    // Special Actions
    // Action - Constructor
    Student();
    Student(std::string name);

    // Special Actions
    // Action - Destructor
    ~Student();

    void printName();

  // Hidden 'fields' or 'attributes' of our class
  private:
    std::string m_name;

};

#endif
