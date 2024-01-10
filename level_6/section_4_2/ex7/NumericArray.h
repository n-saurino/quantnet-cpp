#ifndef NUMERICARRAY_H
#define NUMERICARRAY_H
#include "Array.cpp"

template<typename T>
class NumericArray: public Array<T>{
    private:

    public:
    NumericArray();
    ~NumericArray();

    // Member Functions
    T DotProduct(const NumericArray<T>& source);

    // Member operator overloading
    NumericArray<T>& operator = (const NumericArray<T>& source); // operator overloading
    NumericArray<T>& operator * (const T factor); // operator overloading
    NumericArray<T>& operator + (const NumericArray<T>& source); // operator overloading

};

#endif