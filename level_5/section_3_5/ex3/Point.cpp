#include "Point.h"


Saurino::CAD::Point::Point(): Shape(), m_x(0.0), m_y(0.0) {
	std::cout << "Point Colon Constructor Called!\n";
}

Saurino::CAD::Point::Point(float new_x, float new_y): Shape(), m_x(new_x), m_y(new_y) {
	std::cout << "Point Colon Copy Constructor Called!\n";
}

Saurino::CAD::Point::~Point() {
	std::cout << "Point Destructor Called!\n";
}

void Saurino::CAD::Point::X(float new_x) {
	m_x = new_x;
}

void Saurino::CAD::Point::Y(float new_y) {
	m_y = new_y;
}

float Saurino::CAD::Point::X() const {
	return m_x;
}

float Saurino::CAD::Point::Y() const {
	return m_y;
}

std::string Saurino::CAD::Point::ToString() const {
	std::stringstream ss;
	std::string s;
	s = Shape::ToString();
	ss << s << ": Point(" << X() << ", " << Y() << ")";
	s = ss.str();
	return s;
}

double Saurino::CAD::Point::Distance() const {
	double distance;
	distance = std::sqrt(std::pow((m_x - 0), 2) + std::pow((m_y - 0), 2));
	return distance;

}

double Saurino::CAD::Point::Distance(const Point& p) const {
	double distance;
	float p_x = p.m_x;
	float p_y = p.m_y;

	// attempting to change the object passed by const reference, Error C3490: 'm_x' cannot be modified because it is being accessed through a const object
	//p.m_x = 5; 

	distance = std::sqrt(std::pow((m_x - p_x), 2) + std::pow((m_y - p_y), 2));
	return distance;
}


Saurino::CAD::Point Saurino::CAD::Point::operator - () const {
	// The additive inverse of the current complex number
	return Point(-m_x, -m_y);
}

Saurino::CAD::Point Saurino::CAD::Point::operator * (double factor) const {
	// return the Point scaled by factor
	return Point(m_x * factor, m_y * factor);
}

Saurino::CAD::Point Saurino::CAD::Point::operator + (const Point& p) const {
	// return a new point object that is the addition of two points
	return Point(m_x + p.m_x, m_y + p.m_y);
}
bool Saurino::CAD::Point::operator == (const Point& p) const {
	// returns equivalence of two points
	return m_x == p.m_x && m_y == p.m_y;
}

Saurino::CAD::Point& Saurino::CAD::Point::operator = (const Point& source) {
	Shape::operator=(source);
	this->X(source.m_x);
	this->Y(source.m_y);
	std::cout << "Point Assignment Operator Called!\n";
	return *this;
}

Saurino::CAD::Point& Saurino::CAD::Point::operator *= (double factor) {
	this->X(m_x * factor);
	this->Y(m_y * factor);
	return *this;

}

namespace Saurino{
	namespace CAD {
		std::ostream& operator << (std::ostream& os, const Saurino::CAD::Point& p)
		{ // Print the Point object

			os << p.ToString();
			return os;
		}
	}
}
