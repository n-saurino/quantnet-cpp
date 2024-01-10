#ifndef Stack_cpp
#define Stack_cpp
#include "Stack.h"
#include "StackFullException.h"
#include "StackEmptyException.h"

/*
Stack works from front to back, moving the current index from 0 to m_size of
the array
*/

template<typename T>
Stack<T>::Stack(){
    m_current = 0;
    m_array = Array<T>();
}

template<typename T>
Stack<T>::Stack(int size){
    m_current = 0;
    m_array = Array<T>(size);
}

template<typename T>
Stack<T>::~Stack(){
    // calls destructor of Array class
}

template<typename T>
void Stack<T>::Push(const T& other){
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

template<typename T>
T Stack<T>::Pop(){
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

template<typename T>
Array<T>& Stack<T>::GetArray(){
    return m_array;
}

template<typename T>
T& Stack<T>::operator = (const T& source){
    if(this != &source){
        delete m_array;
        m_array = source.m_array;
        m_current = source.m_current;
        
    }
    return *this;
}
#endif