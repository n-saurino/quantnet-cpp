#include "Array.h"

// Constructor
Array::Array() {
	m_size = 10;
	m_data = new Point*[m_size];
	for (int i = 0; i < m_size; i++) {
		this->m_data[i] = new Point();
	}
}

Array::Array(int size) {
	m_size = size;
	m_data = new Point*[m_size];
	for (int i = 0; i < m_size; i++) {
		this->m_data[i] = new Point();
	}
}

Array::Array(const Array& src) {
	int src_size = src.Size();
	delete[] m_data;
	m_size = src_size;
	m_data = new Point*[src_size];
	for (int i = 0; i < src_size; i++) {
		this->m_data[i] = new Point(*src.m_data[i]);
	}
}

// Destructor
Array::~Array() {
	for(int i = 0; i < this->m_size; i++){
		delete this->m_data[i];
	}
	delete[] m_data;
}

// Member functions
int Array::Size() const{
	return m_size;
}

void Array::SetElement(int index, Point src) {
	if (index < this->Size() && index > 0) {
		delete this->m_data[index];
		this->m_data[index] = new Point(src);
	}

}

Point& Array::GetElement(int index) {
	if (index < this->Size() && index > 0) {
		return *this->m_data[index];
	}
	else {
		return *this->m_data[0];
	}
}

// overloaded operators
Array& Array::operator = (Array& src) {
	// Check if memory addresses are the same for both objects
	if (this != &src) {
		// Delete the object array and create/copy the source objects data
		int src_size = src.Size();
		delete[] m_data;
		m_size = src_size;
		m_data = new Point * [src_size];
		for (int i = 0; i < src_size; i++) {
			this->m_data[i] = new Point(*src.m_data[i]);
		}
	}

	return *this;
}

Point& Array::operator [] (int index) {
	if (index < this->Size() && index > 0) {
		return *this->m_data[index];
	}
	else {
		return *this->m_data[0];
	}

}

const Point& Array::operator [] (int index) const {
	if (index < this->Size() && index > 0) {
		return *this->m_data[index];
	}
	else {
		return *this->m_data[0];
	}
}

