#ifndef POINT_H
#define POINT_H
#include <sstream>
#include <string>
#include <cmath>
#include <iostream>

class Point
{
private:
	float m_x;
	float m_y;


public:
	Point();
	Point(float new_x, float new_y);
	~Point();
	inline void X(float new_x) {
		m_x = new_x;
	}
	inline void Y(float new_y) {
		m_y = new_y;
	}
	float X() const;
	float Y() const;
	std::string ToString() const;
	double Distance() const; //  Calculate the distance to the origin (0, 0).
	double Distance(const Point& p) const; // Calculate the distance between two points.

};

#endif


