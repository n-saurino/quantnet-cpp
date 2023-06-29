#ifndef LINE_H
#define LINE_H
#include "Point.h"
#include <sstream>
#include <string>
#include <cmath>
#include <iostream>

class Line
{
private:
	Point p1;
	Point p2;

public:
	Line();
	Line(Point& new_p1, Point& new_p2);
	Line(const float new_p1x, const float new_p1y, const float new_p2x, const float new_p2y);
	~Line();
	double Length() const;
	std::string ToString() const;
	const Point& P1() const;
	const Point& P2() const;
	void P1(Point& new_p1);
	void P2(Point& new_p2);

	// Member operator overloading
	Line& operator = (const Line& source);

};

#endif