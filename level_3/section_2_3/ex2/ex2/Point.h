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
	void SetX(float new_x);
	void SetY(float new_y);
	float GetX();
	float GetY();
	std::string ToString();
	double DistanceOrigin(); //  Calculate the distance to the origin (0, 0).
	double Distance(const Point &p); // Calculate the distance between two points.

};

#endif
