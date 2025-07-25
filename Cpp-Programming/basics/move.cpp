#include <iostream>
#include <string>
/* Move Semantics
- <utilily> header, c++11 >
- std::move is used to indicate that an object t may be "moved from", i.e. allowing the efficient move of resources from t to another object.
- std::move moves the data instead of creating a copy of it. Transfering the ownership or stealing the resources from another.
*/

// Construct a new string. This uses copy constructor
// We have 'rvalue' on the right, and that will be copied into 'MyString' using the copy contructor.
int main() {
  std::string myString = "copy construct me";
  std::string newValue;

  std::cout << "myString: " << myString << std::endl;
  std::cout << "newValue: " << newValue << std::endl;
  // std::move allows us to "adopt" or "steal" the value 
  newValue = std::move(myString);
  // Could more explicitly call the static cast here to move the value of myString into newValue.
  
  // Not here, myString is still some 'valid' value. 
  // Maybe it stores "nullptr" in the data in the string, but it still exists.
  //newValue = static_cast<std::string&&>(myString)
  std::cout << "myString: " << myString << std::endl;
  std::cout << "newValue: " << newValue << std::endl;
  

  return 0;
}

