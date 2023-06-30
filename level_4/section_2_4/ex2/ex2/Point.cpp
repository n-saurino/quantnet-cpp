#include "Point.h"


Point::Point() {
	std::cout << "Constructor Called!\n";
}

Point::Point(float new_x, float new_y) {
	m_x = new_x;
	m_y = new_y;
	std::cout << "Copy Constructor Called!\n";
}

Point::~Point() {
	std::cout << "Destructor Called!\n";
}

void Point::X(float new_x) {
	m_x = new_x;
}

void Point::Y(float new_y) {
	m_y = new_y;
}

float Point::X() const {
	return m_x;
}

float Point::Y() const {
	return m_y;
}

std::string Point::ToString() const {
	std::stringstream ss;
	ss << "Point(" << X() << ", " << Y() << ")";
	std::string s = ss.str();
	return s;
}

double Point::Distance() const {
	double distance;
	distance = std::sqrt(std::pow((m_x - 0), 2) + std::pow((m_y - 0), 2));
	return distance;

}

double Point::Distance(const Point& p) const {
	double distance;
	float p_x = p.m_x;
	float p_y = p.m_y;

	// attempting to change the object passed by const reference, Error C3490: 'm_x' cannot be modified because it is being accessed through a const object
	//p.m_x = 5; 

	distance = std::sqrt(std::pow((m_x - p_x), 2) + std::pow((m_y - p_y), 2));
	return distance;
}


Point Point::operator - () const {
	// The additive inverse of the current complex number
	return Point(-m_x, -m_y);
}

Point Point::operator * (double factor) const {
	// return the Point scaled by factor
	return Point(m_x * factor, m_y * factor);
}

Point Point::operator + (const Point& p) const {
	// return a new point object that is the addition of two points
	return Point(m_x + p.m_x, m_y + p.m_y);
}
bool Point::operator == (const Point& p) const {
	// returns equivalence of two points
	return m_x == p.m_x && m_y == p.m_y;
}

Point& Point::operator = (const Point& source) {
	this->X(source.m_x);
	this->Y(source.m_y);
	return *this;
}

Point& Point::operator *= (double factor) {
	this->X(m_x * factor);
	this->Y(m_y * factor);
	return *this;

}

std::ostream& operator << (std::ostream& os, const Point& p)
{ // Print the Point object

	os << p.ToString() << "\n";
	return os;
}