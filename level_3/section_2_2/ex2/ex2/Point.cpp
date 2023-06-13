#include "Point.h"

Point::Point() {

}

Point::Point(float x, float y) {
	SetX(x);
	SetY(y);
}

Point::~Point() {

}

float Point::GetX() {
	return m_x;
}

float Point::GetY() {
	return m_y;
}

void Point::SetX(float x) {
	m_x = x;
}

void Point::SetY(float y) {
	m_y = y;
}

std::string Point::ToString() {
	std::stringstream ss;
	ss << "Point(" << GetX() << ", " << GetY() << ")";
	std::string s = ss.str();
	return s;
}

double Point::DistanceOrigin() {
	double distance;
	distance = std::sqrt(std::pow((m_x - 0),2) + std::pow((m_y - 0),2));
	return distance;

}

double Point::Distance(Point p) {
	double distance;
	float p_x = p.GetX();
	float p_y = p.GetY();

	distance = std::sqrt(std::pow((m_x - p_x), 2) + std::pow((m_y - p_y), 2));
	return distance;
}