// ex7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Point.h"
#include <iostream>

int main()
{
	float x;
	float y;
	x = 10;
	y = 5;
	Point p(10, 5);

	std::cout << "x-coordinate of point: " << p.X() << "\n";
	std::cout << "y-coordinate of point: " << p.Y() << "\n";

	x = 1;
	y = 2;
	p.X(x);
	p.Y(y);
	std::cout << "x-coordinate of point: " << p.X() << "\n";
	std::cout << "y-coordinate of point: " << p.Y() << "\n";
}
