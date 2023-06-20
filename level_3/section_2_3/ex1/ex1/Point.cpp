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

void Point::SetX(float new_x) {
	m_x = new_x;
}

void Point::SetY(float new_y) {
	m_y = new_y;
}

float Point::GetX() {
	return m_x;
}

float Point::GetY() {
	return m_y;
}

std::string Point::ToString() {
	std::stringstream ss;
	ss << "Point(" << GetX() << ", " << GetY() << ")";
	std::string s = ss.str();
	return s;
}

double Point::DistanceOrigin() {
	double distance;
	distance = std::sqrt(std::pow((m_x - 0), 2) + std::pow((m_y - 0), 2));
	return distance;

}

double Point::Distance(Point p) {
	double distance;
	float p_x = p.GetX();
	float p_y = p.GetY();

	distance = std::sqrt(std::pow((m_x - p_x), 2) + std::pow((m_y - p_y), 2));
	return distance;
}