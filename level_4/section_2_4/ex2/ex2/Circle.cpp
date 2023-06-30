#include "Circle.h"

Circle::Circle() {
	Point temp(0, 0);
	m_radius = 1;
	center = temp;
}


Circle::Circle(Point& p, double r) {
	m_radius = r;
	center = p;
}


Circle::~Circle() {

}


void Circle::CenterPoint(Point& p) {
	center = p;
}


Point& Circle::CenterPoint() {
	return center;
}


void Circle::Radius(double r) {
	m_radius = r;
}


double Circle::Radius() const {
	return m_radius;
}


double Circle::Diameter() const {
	return m_radius * 2;
}


double Circle::Area() const {
	return M_PI * pow(m_radius, 2);
}


double Circle::Circumference() const {
	return 2 * M_PI * m_radius;
}


std::string Circle::ToString() {
	std::stringstream ss;
	std::string s;
	ss << "Circle with Radius: " << m_radius << " and Center Point: " << center.ToString();
	s = ss.str();
	return s;
}


Circle& Circle::operator = (const Circle& source) {
	this->center = source.center;
	this->m_radius = source.m_radius;
	return *this;
}

std::ostream& operator << (std::ostream& os, Circle& c)
{ // Print the Circle object

	os << c.ToString() << "\n";
	return os;
}