#include <iostream>
#include "Array.cpp"
#include "Shape.h"
#include <boost/smart_ptr.hpp>

using namespace std;

int main(){

    /*
    Building an array with Shape smart pointers and testing the creation/deletion
    of different shape objects
    */

    // Typedef for a shared pointer to shape and
    // a typedef for an array with shapes stored as shared pointers. 
    typedef boost::shared_ptr<Saurino::CAD::Shape> ShapePtr;
    typedef Array<ShapePtr> ShapeArray;   

    ShapeArray smart_ptr_array(3);

    ShapePtr c_ptr(new Saurino::CAD::Circle());
    ShapePtr l_ptr(new Saurino::CAD::Line());
    ShapePtr p_ptr(new Saurino::CAD::Point());

    smart_ptr_array.SetElement(0, c_ptr);
    smart_ptr_array.SetElement(1, l_ptr);
    smart_ptr_array.SetElement(2, p_ptr);

    for(int i = 0; i < smart_ptr_array.Size(); i++){
        cout << i << ": ";
        smart_ptr_array[i]->Print();
        cout << endl;
    }

}