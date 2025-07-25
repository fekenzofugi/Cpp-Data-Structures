#include <iostream>
#include <memory> // unique_ptr

/*
- Raw Pointers allow sharing:
  1) Allow room for errors (meaning forgetting to dealocate)
  2) Ownership (Dealocating before accessing it)
- Smart Pointers:
  1) Address these issues.
  2) RAII - Scoped -> Will be deleted after out of scope.
  3) Unique Pointer 
- Unique Pointers:
  1) We cannot share (no copies are allowed). TWO POINTERS CANNOT POINT TO THE SAME ADDRESS.
  2) We don't have to delete, deletes within the scope (block scope {})
  3) Move semantics is allowed.
*/

// Some user defined type
class UDT {
  public:
    // Contructor (Called on creation)
    UDT() { std::cout << "UDT Created" << std::endl; }

    // Destructor (called on destruction)
    ~UDT() { std::cout << "UDT Destroyed" << std::endl; }
};

int main() {
  /* RAW POINTERS
  int* array = new int[100];
  for(int i=0; i < 100; i++) {
    array[i] = i;
  }

  int* ptr = array;

  // Output value value pointed to by ptr
  std::cout << "*ptr = " << *ptr << std::endl;

  // Create a second pointer
  int* ptr2 = ptr;
  
  std::cout << "*ptr2 = " << *ptr2 << std::endl;

  delete[] array;
  */    
      
  // SMART Pointers
  // Creating one unique pointer
  std::unique_ptr<UDT> fekenzofugi = std::unique_ptr<UDT>(new UDT);
  // NOT POSSIBLE std::unique_ptr<UDT> joe = fekenzofugi;
  // We are allowed to move a unique pointer
  // But we cannot copy with unique pointer
  std::unique_ptr<UDT> joe = std::move(fekenzofugi);
  // Create an 'array' that is pointed to, by one unique ptr
  // std::unique_ptr<UDT[]> array = std::unique_ptr<UDT[]>(new UDT[2]);
  // The equivalent to the line above is:
  // std::unique_ptr<UDT[]> array2 = std::make_unique<UDT[]>(2);
  
  return 0;
}
