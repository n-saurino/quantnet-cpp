#include <iostream>
#include "Array.cpp"

using namespace std;

int main(){
    Array<Saurino::CAD::Point> a1;
    
    Array<Saurino::CAD::Point> a2(5);
    Saurino::CAD::Point p1(5, 10);
 
    a1.SetElement(9, p1);

    std::cout << "PRINTING A1\n";
    for (int i = 0; i < a1.Size(); i++) {
        a1.GetElement(i).Print();
    }

    a1 = a1;

    a1 = a2;

    a1.SetElement(2, p1);

    std::cout << "PRINTING A1 AFTER ASSIGNMENT TO A2\n";
    std::cout << "A1.Size(): " << a1.Size() << "\n";
    for (int i = 0; i < a1.Size(); i++) {
        a1.GetElement(i).Print();
    }

    std::cout << "PRINTING A1 ELEMENT USING [] OPERATOR\n";
    a1[2].Print();
    
    // Produces an uncaught exception error
    // libc++abi: terminating due to uncaught exception of type int
    //a1[30].Print();

    // Now catch the error with a try-catch block and print the error to screen
    try
    {
        a1[30].Print();
    }
    catch(const ArrayException &e)
    {
        cout << e.GetMessage();
    }
    
    a1[3] = a1[2];
    std::cout << "PRINTING A1 AFTER WRITING TO 4TH ELEMENT WITH [] OPERATOR\n";
    for (int i = 0; i < a1.Size(); i++) {
        a1.GetElement(i).Print();
    }


}