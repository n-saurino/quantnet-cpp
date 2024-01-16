#include <iostream>
#include <boost/variant.hpp>
#include "VariantVisitor.h"

using namespace std;

typedef boost::variant<Saurino::CAD::Circle, Saurino::CAD::Line, Saurino::CAD::Point> ShapeType;

ShapeType* CreateVariant(){
    cout << "What kind of Shape would you like to create and store in your variant (Point, Line or Circle)? ";
    string s;
    cin >> s;

    // s = "Line";
    // cout << endl;



    if (s == "Point") {
        return new ShapeType(Saurino::CAD::Point());
    } else if (s == "Line") {
        // ShapeType* st = new ShapeType(Saurino::CAD::Line());;
        // Saurino::CAD::Line line = boost::get<Saurino::CAD::Line>(*st);
        // cout << "Line in function: " << line << endl;
        return new ShapeType(Saurino::CAD::Line());
    } else if (s == "Circle") {
        // ShapeType* st = new ShapeType(Saurino::CAD::Circle());;
        return new ShapeType(Saurino::CAD::Circle());
    } else {
        cout << "Invalid shape specified." << endl;
        // I think this returns garbage
    }
}

int main(){

    ShapeType* shape = CreateVariant();

    VariantVisitor vv(1,2);

    if(Saurino::CAD::Point* point = boost::get<Saurino::CAD::Point>(&*shape)){
        cout << point->ToString() << endl;

        boost::apply_visitor(vv, *shape);

        point = boost::get<Saurino::CAD::Point>(&*shape);

        cout << point->ToString() << endl;
    }else if (Saurino::CAD::Line* line = boost::get<Saurino::CAD::Line>(&*shape)){
	
        cout << line->ToString() << endl;

        boost::apply_visitor(vv, *shape);

        line = boost::get<Saurino::CAD::Line>(&*shape);

        cout << line->ToString() << endl;
    }else if(Saurino::CAD::Circle* circle = boost::get<Saurino::CAD::Circle>(&*shape)){
        
        cout << circle->ToString() << endl;

        boost::apply_visitor(vv, *shape);

        circle = boost::get<Saurino::CAD::Circle>(&*shape);

        cout << circle->ToString() << endl;
    }else{
        cout << "Unknown Shape Object!!" << endl;
    }

    return 0;
}