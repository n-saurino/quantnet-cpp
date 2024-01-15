#ifndef STACK_H
#define STACK_H
#include "Array.cpp"

template<typename T, int size>
class Stack{
    private:
    int m_current;
    

    protected:
    Array<T> m_array;

    public:
    Stack();
    ~Stack();
    void Push(const T& other);
    T Pop();
    Array<T>& GetArray();

    // Member function operator overloading
    T& operator = (const T& source);

};
#endif