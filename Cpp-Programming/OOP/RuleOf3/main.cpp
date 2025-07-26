#include "Array.hpp"


/* RULE OF THREE
Is a rule of thumb in C++ that claims that if a class defines any of the following 
  * Destructor
  * Copy Constructor
  * Copy Assignment Operator
then it should probably explicitly define all three.

Because implicitly-generated constructors and assignment operatores simply cover all class data members (shallow copy),
one should define explicit copy construcotr and copy assignment operators for classes that encapsulate complex data structures
or have external references such as pointers, if you need to copy the objects pointed to by the class members. If the default 
behavior ("shallow copy") is actually the intended one, then an explicit definition, although redundant, will be 
"self-documenting code" indicating that it was an intention rather than an oversight. 
*/

/* LAW OF THE BIG TWO 
An amendment to this rule is that if the class is designed in such a way that resource acquisition is initialization (RAII) 
is used for all its (nontrivial) members, the destructor may be left undefined (also known as The Law of The Big Two[3]).
A ready-to-go example of this approach is the use of smart pointers instead of plain ones.
*/

int main() {

  // Initialize all of our data
  Array myArray;

  myArray.SetData(0, 1000);
  myArray.SetData(1, 77);
  myArray.SetData(2, 999);

  Array myArray2;
  myArray2 = myArray; // Copy Assignment Operator

  myArray.PrintingData();
  myArray2.PrintingData();
}
