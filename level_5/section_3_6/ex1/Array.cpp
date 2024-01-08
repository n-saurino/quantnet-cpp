#include "Array.h"

Array::Array(){
    this->m_data = new Saurino::CAD::Point[10];
    this->m_size = 10;
    // Initialize each element to a default Point
    for (int i = 0; i < 10; ++i) {
        m_data[i] = Saurino::CAD::Point(); // Assuming Point has a default constructor
    }
}

Array::Array(int size){
    this->m_data = new Saurino::CAD::Point[size];
    this->m_size = size;
    // Initialize each element to a default Point
    for (int i = 0; i < size; ++i) {
        m_data[i] = Saurino::CAD::Point(); // Assuming Point has a default constructor
    }
}

Array::Array(const Array &source){
    this->m_data = new Saurino::CAD::Point[source.m_size];
    Saurino::CAD::Point* curr_point = source.m_data;
    for(int i = 0; i < source.m_size; i++){
        this->m_data[i] = *(source.m_data+i);
    }
}

// Destructor
Array::~Array() {
	delete[] m_data;
}



void Array::SetElement(int idx, Saurino::CAD::Point &src){
    if(idx >= 0 && idx < m_size){
        m_data[idx] = src;
    }else{
        throw -1;
    }
}

Saurino::CAD::Point& Array::GetElement(int idx) const{
    if(idx >= 0 && idx < m_size){
        return m_data[idx];
    }else{
        throw -1;
    }
}

int Array::Size() const{
    return this->m_size;
}

Array& Array::operator = (const Array& source){
    if (this != &source) {
        delete[] m_data;
        this->m_data = new Saurino::CAD::Point[source.m_size];
        this->m_size = source.m_size;
        Saurino::CAD::Point* curr_point = source.m_data;
        for(int i = 0; i < source.m_size; i++){
            this->m_data[i] = *(source.m_data+i);
        }
    }
    return *this;
}

Saurino::CAD::Point& Array::operator [] (int index) {
	if (index < this->Size() && index > 0) {
		return this->m_data[index];
	}
	else {
		throw -1;
	}

}

const Saurino::CAD::Point& Array::operator [] (int index) const {
	if (index < this->Size() && index > 0) {
		return this->m_data[index];
	}
	else {
		return this->m_data[0];
	}
}