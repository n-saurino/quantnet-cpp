#ifndef CIRCLE_H
#define CIRCLE_H
#define _USE_MATH_DEFINES
#include "Point.h"
#include <sstream>
#include <string>
#include <cmath>
#include <iostream>

class Circle
{
private:
	double m_radius;
	Point center;

public:
	Circle();
	Circle(Point& p, double r);
	~Circle();
	void CenterPoint(Point& p);
	Point& CenterPoint();
	void Radius(double r);
	double Radius() const;
	double Diameter() const;
	double Area() const;
	double Circumference() const;
	std::string ToString();
	// Member operator overloading
	Circle& operator = (const Circle& source);

	// Global operator overloading
	friend std::ostream& operator << (std::ostream& os, Circle& c); // send to ostream.
};

#endif

