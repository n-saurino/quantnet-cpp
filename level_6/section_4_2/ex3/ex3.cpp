#include <iostream>
#include "NumericArray.cpp"


using namespace std;

int main(){

    /*
    The type for these NumericArray template arguments must be numeric values that 
    the function can perform numeric operations on. 

    Apparently, I can create a NumericArray<Point> of Point objects.
    */

    NumericArray<int> intArray1;
    NumericArray<int> intArray2;
    NumericArray<int> intArray3;
    NumericArray<double> doubleArray;
    NumericArray<Saurino::CAD::Point> pointArray;

    for(int i = 0; i < intArray1.Size(); i++){
        intArray1[i] = i;
        cout << intArray1[i] << endl;
    }
    
    intArray2 = intArray1*2;

    for(int i = 0; i < intArray2.Size(); i++){
        cout << i << ": " << intArray2[i] << endl;
    }

    intArray3 = intArray1+intArray2;
    
    for(int i = 0; i < intArray3.Size(); i++){
        cout << i << ": " << intArray3[i] << endl;
    }

    intArray1.Size(2);
    intArray2.Size(2);

    for(int i = 0; i < intArray1.Size(); i++){
        intArray1[i] = i+1;
        intArray2[i] = i+1;
    }

    cout << intArray2.DotProduct(intArray1) << endl;
}