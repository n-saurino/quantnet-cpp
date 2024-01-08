#include "Shape.h"
#include <sstream>
#include <string>

Saurino::CAD::Shape::Shape(/* args */): m_id(rand())
{
}

Saurino::CAD::Shape::Shape(int new_id): m_id(new_id)
{
}

// Copy constructor
Saurino::CAD::Shape::Shape(const Shape& source): m_id(source.m_id)
{
}

Saurino::CAD::Shape::~Shape()
{
}

Saurino::CAD::Shape& Saurino::CAD::Shape::operator = (const Shape& source) {
	this->m_id = source.m_id;
	return *this;
}

int Saurino::CAD::Shape::ID() const{
    return this->m_id;
}

std::string Saurino::CAD::Shape::ToString() const{
    std::stringstream ss;
	ss << "Shape[ID: " << this->m_id << "]";
	std::string s = ss.str();
	return s;
}
