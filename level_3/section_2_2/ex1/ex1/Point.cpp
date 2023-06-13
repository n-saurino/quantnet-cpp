#include "Point.h"

// Class implementation of Point: Mostly getters and setters. One ToString() function
// to help with printing object values

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
