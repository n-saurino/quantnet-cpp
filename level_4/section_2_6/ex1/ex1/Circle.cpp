#include "Circle.h"

Saurino::CAD::Circle::Circle() {
	Point temp(0, 0);
	m_radius = 1;
	center = temp;
}


Saurino::CAD::Circle::Circle(Point& p, double r) {
	m_radius = r;
	center = p;
}


Saurino::CAD::Circle::~Circle() {

}


void Saurino::CAD::Circle::CenterPoint(Point& p) {
	center = p;
}


Saurino::CAD::Point& Saurino::CAD::Circle::CenterPoint() {
	return center;
}


void Saurino::CAD::Circle::Radius(double r) {
	m_radius = r;
}


double Saurino::CAD::Circle::Radius() const {
	return m_radius;
}


double Saurino::CAD::Circle::Diameter() const {
	return m_radius * 2;
}


double Saurino::CAD::Circle::Area() const {
	return M_PI * pow(m_radius, 2);
}


double Saurino::CAD::Circle::Circumference() const {
	return 2 * M_PI * m_radius;
}


std::string Saurino::CAD::Circle::ToString() {
	std::stringstream ss;
	std::string s;
	ss << "Circle with Radius: " << m_radius << " and Center Point: " << center.ToString();
	s = ss.str();
	return s;
}


Saurino::CAD::Circle& Saurino::CAD::Circle::operator = (const Circle& source) {
	this->center = source.center;
	this->m_radius = source.m_radius;
	return *this;
}

std::ostream& operator << (std::ostream& os, Saurino::CAD::Circle& c)
{ // Print the Circle object

	os << c.ToString() << "\n";
	return os;
}