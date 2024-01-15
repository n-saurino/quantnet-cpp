#ifndef Stack_cpp
#define Stack_cpp
#include "Stack.h"
#include "StackFullException.h"
#include "StackEmptyException.h"

/*
Stack works from front to back, moving the current index from 0 to m_size of
the array
*/

template<typename T, int size>
Stack<T, size>::Stack(){
    m_current = 0;
    m_array = Array<T>(size);
}

template<typename T, int size>
Stack<T, size>::~Stack(){
    // calls destructor of Array class
}

template<typename T, int size>
void Stack<T, size>::Push(const T& other){
    try
    {
        m_array[m_current] = other;
        m_current++;
    }
    catch(const OutOfBoundsException& e)
    {
        throw StackFullException();
    }
    
}

template<typename T, int size>
T Stack<T, size>::Pop(){
    T temp;
    try
    {
        m_current--;
        temp = m_array[m_current];
        return temp;
    }
    catch(const OutOfBoundsException& e)
    {
        m_current = 0;
        throw StackEmptyException();
    }
}

template<typename T, int size>
Array<T>& Stack<T, size>::GetArray(){
    return m_array;
}

template<typename T, int size>
T& Stack<T, size>::operator = (const T& source){
    if(this != &source){
        delete m_array;
        m_array = source.m_array;
        m_current = source.m_current;
        
    }
    return *this;
}
#endif