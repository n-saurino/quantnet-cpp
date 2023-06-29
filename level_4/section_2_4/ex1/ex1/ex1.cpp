// ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Line.h"
#include "Circle.h"
int main()
{
	float x = 10;
	float y = 5;
	Point Pnt1(x, y);

	Point Pnt2 = Pnt1 * 10;

	std::cout << "Pnt2: " << Pnt2.ToString() << "\n";

	Point Pnt3 = Pnt1 + Pnt2;
	std::cout << "Pnt3: " << Pnt3.ToString() << "\n";

	Point Pnt4 = -Pnt1;
	std::cout << "Pnt4: " << Pnt4.ToString() << "\n";

	Pnt4 *= -2;
	std::cout << "Pnt4: " << Pnt4.ToString() << "\n";

	if (Pnt4 == Pnt4) {
		std::cout << "Pnt4 == Pnt4\n";
	}
	if (Pnt4 == Pnt1) {
		std::cout << "Pnt4 == Pnt1\n";
	}
	else {
		std::cout << "Pnt4 != Pnt1\n";
	}
	

}
