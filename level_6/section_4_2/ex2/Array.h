#ifndef ARRAY_H
#define ARRAY_H
#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "OutOfBoundsException.h"

template<typename T>
class Array{
    private:
        T* m_data;
        int m_size;
        static int m_def_size;

    public:
        Array();
        Array(int size);
        Array(const Array<T> &source);
        ~Array();
        void SetElement(int idx, T &src);
        T& GetElement(int idx) const;
        void DefaultSize(int new_size);
        static int DefaultSize();
        int Size() const;

        // Member operator overloading
        Array<T>& operator = (const Array<T>& source);// operator overloading
        T& operator [] (int index);
        const T& operator [] (int index) const;
};

/*
#ifndef Array_cpp // Must be the same name as in source file #define 
#include "Array.cpp"
#endif
*/

#endif