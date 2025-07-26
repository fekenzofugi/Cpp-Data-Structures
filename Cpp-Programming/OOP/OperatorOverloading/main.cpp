#include <iostream>

/*
  Operator Functions are functions with spetial function names:
  1) operator op  
  any of the following operators:+ - * / % ^ & | ~ ! = < > += -= *= /= %= ^= &= |= << >> >>= <<= == != <= >= <=>(since C++20)   && || ++ -- , ->* -> () []

  2) operator new 
     operator new []

  3) operator delete
     operator delete []

  4) operator co_await
*/


// A vector3 data type, storing floats
class Vector3f {
  public:
    Vector3f() {
      x = 0.0f;
      y = 0.0f; 
      z = 0.0f;
    }
    
    Vector3f operator+(const Vector3f& rhs) const { //const means that we're not changing anything the current object in this function.
      Vector3f result;
      result.x = x + rhs.x;
      result.y = y + rhs.y;
      result.z = z + rhs.z;
      return result;
    }
    //prefix increment
    Vector3f operator++() {
      x = x+1;
      y = y+1;
      z = z+1;
      return *this;
    }

    bool operator==(const Vector3f& rhs) {
      std::cout << "part of the class" << std::endl;
      float u = 1e-12;
      if (x - rhs.x < u  && y - rhs.y < u && z - rhs.z < u) {
        return true;
      }
      return false;
    }
    
    float x, y, z;
};

// output stream
std::ostream& operator<<(std::ostream& os, const Vector3f& obj) {
  
  os << obj.x << "," << obj.y << "," << obj.z;

  return os;
}

bool operator==(const Vector3f& lhs, const Vector3f rhs) {
  std::cout << "free function" << std::endl;
  if(lhs.x == rhs.x && lhs.y == rhs.y && lhs.z == rhs.z) {
    return true;
  } 
  return false;  
}

int main() {

  Vector3f myVector;
  myVector.x = 0.9999999999999f;
  myVector.y = 0.9999999999999f;
  myVector.z = 0.9999999999999f;
  Vector3f myVector2;
  myVector2.x = 1.f;
  myVector2.y = 1.f;
  myVector2.z = 1.f;

  Vector3f result;
  result = myVector + myVector2;
  ++result;
  std::cout << result << std::endl;
  
  if(myVector == myVector2) {
    std::cout << "The vectors are equal" << std::endl;
  } else {
    std::cout << "The vectors are not equal" << std::endl;
  }

  return 0;
}
