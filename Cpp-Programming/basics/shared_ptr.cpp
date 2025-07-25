#include <iostream>
#include <memory> // shared_ptr 
/*
- Raw Pointers allow sharing:
  1) Allow room for errors (meaning forgetting to dealocate)
  2) Ownership (Dealocating before accessing it)
- Smart Pointers: Helps us avoid calling new and delete.
  1) Address these issues.
  2) RAII - Scoped -> Will be deleted after out of scope.
  3) Unique Pointer, Shared Pointer
- Unique Pointers:
  1) We cannot share (no copies are allowed). TWO POINTERS CANNOT POINT TO THE SAME ADDRESS.
  2) We don't have to delete, deletes within the scope (block scope {})
  3) Move semantics is allowed.
- Shared Pointers:
  1) We can share. Two pointers can point to the same resource.
  2) Reference Count: Count how many pointers are pointing to the same resource. The pointers can be located in different scopes. But the resource is dealocated only when all pointers are within scope. This is handled automatically.
  3) Shared Ownership: Lifetime of the resource over time.
  4) The reference count is thread safe.

*/
// Some user defined type 
class UDT{
  public: 
    // Constructor (called on creation) 
    UDT() { std::cout << "UDT Created" << std::endl; }    
    // Destructor (called on destruction)
    ~UDT() { std::cout << "UDT Destroyed" << std::endl; }
};

int main() {
  {
    // Creating our shared pointer
    std::shared_ptr<UDT> ptr1 = std::make_shared<UDT>();
    { 
      // Then in a new scope, I share the resource
      std::shared_ptr<UDT> ptr2 = ptr1;
      // Our reference count is updated
      std::cout << "use count = " << ptr2.use_count() << std::endl;
    } // Then ptr2 is freeded
    // Then we check our updated reference count
    std::cout << "use count = " << ptr1.use_count() << std::endl; 
  } 
  std::cout << "The resources should be dealocated before this line" << std::endl;
  return 0;
}
