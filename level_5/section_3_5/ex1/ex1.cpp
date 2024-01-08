#include <iostream>
#include "Line.h"
#include "Point.h"

using namespace std;

int main(){
    Saurino::CAD::Shape s; // Create shape.
    Saurino::CAD::Point p(10, 20); // Create point.
    Saurino::CAD::Line l(Saurino::CAD::Point(1,2), Saurino::CAD::Point(3, 4)); // Create line.

    cout<<s.ToString()<<endl; // Print shape.
    cout<<p.ToString()<<endl; // Print point.
    cout<<l.ToString()<<endl; // Print line

    cout<<"Shape ID: "<<s.ID()<<endl; // ID of the shape.
    cout<<"Point ID: "<<p.ID()<<endl; // ID of the point. Does this work?
    cout<<"Line ID: "<<l.ID()<<endl; // ID of the line. Does this work?

    Saurino::CAD::Shape* sp; // Create pointer to a shape variable.
    sp=&p; // Point in a shape variable. Possible?
    cout<<sp->ToString()<<endl; // What is printed?

    // Create and copy Point p to new point.
    Saurino::CAD::Point p2;
    p2=p;
    cout<<p2<<", "<<p2.ID()<<endl; // Is the ID copied if you do not call the base class assignment in point?
}