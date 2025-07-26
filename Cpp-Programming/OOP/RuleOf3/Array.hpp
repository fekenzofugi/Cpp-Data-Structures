#ifndef ARRAY_HPP
#define ARRAY_HPP

class Array {
  public:
    // SPECIAL MEMBER FUNCTIONS
    // 1) Constructor
    Array();
    // 2) Destructor
    ~Array();
    // 3) Copy Constructor
    Array(const Array& rhs);
    // 4) Copy Assignment Operator
    Array& operator = (const Array& rhs);

    void PrintingData();
    void SetData(int index, int value);
  private:
    int* data;
};

#endif
