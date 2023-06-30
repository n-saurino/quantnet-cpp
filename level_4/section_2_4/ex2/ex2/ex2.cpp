// ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.h"
#include "Line.h"
#include "Circle.h"

int main()
{
	Point p1(10, 5);
	std::cout << p1;

	Point p2(1, 1);
	Line l1(p1, p2);
	std::cout << l1;
}
