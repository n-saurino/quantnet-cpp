#ifndef ARRAY_H
#define ARRAY_H
#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "OutOfBoundsException.h"

template<typename T>
class Array{
    private:
    static int m_def_size;
    int m_size;

    protected:
        T* m_data;
        

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
        void Size(int new_size);

        // Member operator overloading
        Array<T>& operator = (const Array<T>& source);// operator overloading
        T& operator [] (int index);
        const T& operator [] (int index) const;
};

#endif