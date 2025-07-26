#include <iostream>
#include <string>

/* Default compiler generated
1) Constructor
2) Destructor

Shallow Copy: Default Given 
C++ gives us a 'free' copy constructor and assignment operator, but, it does a Shallow copy. Which is a simple assignment.
It can cause memory issues, because if a instance of some class points dynamically to some location in memory, and it gets deallocated, 
the copy of this instance will also try to deallocate the resources, but, it already was freed, causing a double free in memory.

Deep Copy: Need to SetUp
What we really want is a deep copy for dynamically allocated memory (HEAP).

3) Copy Constructor
4) Copy-Assignment Operator
*/

class Vector3 {
  public: 
    float x, y, z;
};

class Array{
  public:
    Array() {
      data = new int[10];
      for(int i=0; i<10; i++) {
        data[i] = i * i;  
      }
    }

    ~Array() {
      delete[] data;
    }

    // Copy Constructor
    Array(const Array& rhs){
      std::cout << "Copy Constructor" << std::endl;
      data = new int[10];
      for(int i=0; i<10; i++) {
        data[i] = rhs.data[i];
      }
    }

    // Copy Assigment Operator
    // Object is already constructred, we are just making a copy later (e.g. myArray2 = myArray)
    Array& operator=(const Array& rhs) {
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

    void PrintingData() {
      for(int i=0; i<10; i++) {
        std::cout << data[i] << std::endl;
      }
    }

    void SetData(int index, int value) {
      data[index] = value;
    }
     
  private:
    int* data;
};

int main() {

  Vector3 myVector;
  myVector.x = 1.0f;
  myVector.y = 2.0f;
  myVector.z = 3.0f;
  Vector3 myVector2 = myVector; // Creating a copy
  Vector3 myVector3;
  myVector3 = myVector2; // copy-assignment operator
  std::cout << myVector2.x << ", " << myVector2.y << ", " << myVector2.z << std::endl;
  
  // Initialize all of our data
  Array myArray;
  Array myArray2 = myArray;

  myArray.SetData(0, 100);
  myArray.SetData(1, 200);

  Array myArray3;
  myArray3 = myArray2;

  myArray.PrintingData();
  myArray2.PrintingData();
  myArray3.PrintingData();

  return 0;
}
