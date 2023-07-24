#include "Line.h"

Saurino::CAD::Line::Line() {
	Point pnt1(0, 0);
	Point pnt2(0, 0);
	p1 = pnt1;
	p2 = pnt2;
}

Saurino::CAD::Line::Line(Point& new_p1, Point& new_p2) {
	p1 = new_p1;
	p2 = new_p2;
}

Saurino::CAD::Line::Line(float new_p1x, float new_p1y, float new_p2x, float new_p2y) {
	Point pnt1(new_p1x, new_p1y);
	Point pnt2(new_p2x, new_p2y);
	p1 = pnt1;
	p2 = pnt2;
}

Saurino::CAD::Line::~Line() {

}

double Saurino::CAD::Line::Length() const {
	return p1.Distance(p2);
}

std::string Saurino::CAD::Line::ToString() const {
	std::stringstream ss;
	ss << "Line[" << "Point(" << p1.X() << ", " << p1.Y() << "), Point(" << p2.X() << ", " << p2.Y() << ")]";
	std::string s = ss.str();
	return s;
}

// Have to return a constant reference of the object along with setting a constant member function
const Saurino::CAD::Point& Saurino::CAD::Line::P1() const {
	return p1;
}

// Have to return a constant reference of the object along with setting a constant member function
const Saurino::CAD::Point& Saurino::CAD::Line::P2() const {
	return p2;
}

void Saurino::CAD::Line::P1(Point& new_p1) {
	p1 = new_p1;
}

void Saurino::CAD::Line::P2(Point& new_p2) {
	p2 = new_p2;
}

Saurino::CAD::Line& Saurino::CAD::Line::operator = (const Line& source) {
	this->p1 = source.p1;
	this->p2 = source.p2;
	return *this;

}

namespace Saurino {
	namespace CAD {
		std::ostream& operator << (std::ostream& os, const Saurino::CAD::Line& l)
		{ // Print the Line object

			os << l.ToString() << "\n";
			return os;
		}
	}
}