#include "Array.h"



// Constructor
Saurino::Containers::Array::Array() {
	m_size = 10;
	m_data = new Saurino::CAD::Point * [m_size];
	for (int i = 0; i < m_size; i++) {
		this->m_data[i] = new Saurino::CAD::Point();
	}
}

Saurino::Containers::Array::Array(int size) {
	m_size = size;
	m_data = new Saurino::CAD::Point * [m_size];
	for (int i = 0; i < m_size; i++) {
		this->m_data[i] = new Saurino::CAD::Point();
	}
}

Saurino::Containers::Array::Array(const Array& src) {
	int src_size = src.Size();
	delete[] m_data;
	m_size = src_size;
	m_data = new Saurino::CAD::Point * [src_size];
	for (int i = 0; i < src_size; i++) {
		this->m_data[i] = new Saurino::CAD::Point(*src.m_data[i]);
	}
}

// Destructor
Saurino::Containers::Array::~Array() {
	for (int i = 0; i < this->m_size; i++) {
		delete this->m_data[i];
	}
	delete[] m_data;
}

// Member functions
int Saurino::Containers::Array::Size() const {
	return m_size;
}

void Saurino::Containers::Array::SetElement(int index, Saurino::CAD::Point src) {
	if (index < this->Size() && index > 0) {
		delete this->m_data[index];
		this->m_data[index] = new Saurino::CAD::Point(src);
	}

}

Saurino::CAD::Point& Saurino::Containers::Array::GetElement(int index) {
	if (index < this->Size() && index > 0) {
		return *this->m_data[index];
	}
	else {
		return *this->m_data[0];
	}
}

// overloaded operators
Saurino::Containers::Array& Saurino::Containers::Array::operator = (Array& src) {
	// Check if memory addresses are the same for both objects
	if (this != &src) {
		// Delete the object array and create/copy the source objects data
		int src_size = src.Size();
		delete[] m_data;
		m_size = src_size;
		m_data = new Saurino::CAD::Point * [src_size];
		for (int i = 0; i < src_size; i++) {
			this->m_data[i] = new Saurino::CAD::Point(*src.m_data[i]);
		}
	}

	return *this;
}

Saurino::CAD::Point& Saurino::Containers::Array::operator [] (int index) {
	if (index < this->Size() && index > 0) {
		return *this->m_data[index];
	}
	else {
		return *this->m_data[0];
	}

}

const Saurino::CAD::Point& Saurino::Containers::Array::operator [] (int index) const {
	if (index < this->Size() && index > 0) {
		return *this->m_data[index];
	}
	else {
		return *this->m_data[0];
	}
}

