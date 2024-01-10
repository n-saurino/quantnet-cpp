#ifndef NumericArray_cpp
#define NumericArray_cpp
#include "NumericArray.h"

// Constructor
template<typename T>
NumericArray<T>::NumericArray(){
    Array<T>();
}

template<typename T>
NumericArray<T>::~NumericArray(){
    // Calls base class destructor
}

// Member Functions
template<typename T>
T NumericArray<T>::DotProduct(const NumericArray<T>& source){
    T sum = 0;
    if(this != &source && this->Size() == source.Size()){
        for(int i = 0; i < this->Size(); i++){
            sum += this->GetElement(i)*source.GetElement(i);
        }
    }else{
        throw ArrayException();
    }
    return sum;
}

// Member operator overloading
template<typename T>
NumericArray<T>& NumericArray<T>::operator * (const T factor){
    for(int i = 0; i < this->Size(); i++){
        T temp = this->GetElement(i)*factor;
        this->SetElement(i, temp);
    }
    return *this;
}

template<typename T>
NumericArray<T>& NumericArray<T>::operator + (const NumericArray<T>& source){
    if(this != &source && this->Size() == source.Size()){
        for(int i = 0; i < this->Size(); i++){
            T temp = this->GetElement(i) + source.GetElement(i);
            this->SetElement(i, temp);
        }
    }else{
        throw ArrayException();
    }
    return *this;
}


template<typename T>
NumericArray<T>& NumericArray<T>::operator = (const NumericArray<T>& source){
    if(this != &source){
        delete[] this->m_data;
        this->Size(source.Size());
        this->m_data = new T[source.Size()];
        for(int i = 0; i < source.Size(); i++){
            this->SetElement(i, source.GetElement(i));
        }
    }
    return *this;
}

#endif