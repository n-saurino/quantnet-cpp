#ifndef POINT_H
#define POINT_H
#include <sstream>
#include <string>
#include <cmath>

class Point
{
private:
	float m_x;
	float m_y;

public:
	Point();
	Point(float, float);
	~Point();
	float GetX();
	float GetY();
	void SetX(float);
	void SetY(float);
	std::string ToString();
	double DistanceOrigin(); //  Calculate the distance to the origin (0, 0).
	double Distance(Point p); // Calculate the distance between two points.

};

#endif
