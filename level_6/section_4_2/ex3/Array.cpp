#ifndef Array_cpp
#define Array_cpp
#include "Array.h"

template<typename T>
int Array<T>::m_def_size = 10;

template<typename T>
Array<T>::Array(){
    this->m_size = Array<T>::m_def_size;
    
    this->m_data = new T[this->m_def_size];
    // Initialize each element to a default T
    for (int i = 0; i < 10; ++i) {
        m_data[i] = T(); // Assuming T has a default constructor
    }
}

template<typename T>
Array<T>::Array(int size){
    this->m_data = new T[size];
    this->m_size = size;
    // Initialize each element to a default T
    for (int i = 0; i < size; ++i) {
        m_data[i] = T(); // Assuming T has a default constructor
    }
}

template<typename T>
Array<T>::Array(const Array<T> &source){
    this->m_data = new T[source.m_size];
    T* curr_point = source.m_data;
    for(int i = 0; i < source.m_size; i++){
        this->m_data[i] = *(source.m_data+i);
    }
}

// Destructor
template<typename T>
Array<T>::~Array() {
	delete[] m_data;
}

template<typename T>
void Array<T>::SetElement(int idx, T &src){
    if(idx >= 0 && idx < m_size){
        m_data[idx] = src;
    }else{
        throw OutOfBoundsException(idx);
    }
}

template<typename T>
T& Array<T>::GetElement(int idx) const{
    if(idx >= 0 && idx < m_size){
        return m_data[idx];
    }else{
        throw OutOfBoundsException(idx);
    }
}

template <typename T>
void Array<T>::DefaultSize(int new_size){
    m_def_size = new_size;
}

template<typename T>
int Array<T>::DefaultSize(){
    return m_def_size;
}

template<typename T>
int Array<T>::Size() const{
    return this->m_size;
}

template<typename T>
void Array<T>::Size(int new_size){
    this->m_size = new_size;
}

template<typename T>
Array<T>& Array<T>::operator = (const Array<T>& source){
    if (this != &source) {
        delete[] m_data;
        this->m_data = new T[source.m_size];
        this->m_size = source.m_size;
        // T* curr_point = source.m_data;
        for(int i = 0; i < source.m_size; i++){
            this->m_data[i] = *(source.m_data+i);
        }
    }
    return *this;
}

template<typename T>
T& Array<T>::operator [] (int index) {
	if (index < this->Size() && index >= 0) {
		return this->m_data[index];
	}
	else {
		throw OutOfBoundsException(index);
	}

}

template<typename T>
const T& Array<T>::operator [] (int index) const {
	if (index < this->Size() && index >= 0) {
		return this->m_data[index];
	}
	else {
		return this->m_data[0];
	}
}
#endif