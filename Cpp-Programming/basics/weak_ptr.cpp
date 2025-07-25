#include <iostream>
#include <memory>

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

- Weak Pointers:
  1) Non-Owning Pointer: Does not increase the reference count. Why? 
    * Safer way to have dangling pointers 
    * Break Cycles

- Dangling Pointers: 
  A dangling pointer is a pointer that no longer points to a valid object or memory location in computer programming. This   happens when the object the pointer was referring to is deleted, deallocated, or goes out of scope, but the pointer itsel  f is not updated to reflect this change. Using a dangling pointer can lead to unpredictable behavior, including crashes,   data corruption, or security vulnerabilities
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
  std::weak_ptr<UDT> ptr2;
  {
    // Creating a shared pointer
    std::shared_ptr<UDT> ptr1 = std::make_shared<UDT>();
    { // Then in a new scope, i share the resource
      ptr2 = ptr1;
      // Our reference count is NOT updated with a WEAK pointer
      std::cout << "use_count: " << ptr2.use_count() << std::endl;
    } // Then ptr2 is freed
    // Then check our updated reference count
    std::cout << "use_count: " << ptr1.use_count() << std::endl;
  } // Dealocate Resources
  std::cout << "We should see the destructor before this line" << std::endl;
  std::cout << "Is weak_ptr (object that it points to) valid: " << ptr2.expired() << std::endl;
  return 0;
}
