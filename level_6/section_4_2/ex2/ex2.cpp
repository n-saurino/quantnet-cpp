#include <iostream>
#include "Array.cpp"

using namespace std;

int main(){

    /*
    The DefaultSize() function will update the variable across all instances of the same type. 
    Therefore, the Array<int> arrays will have an updated default size of 15 when only one of them 
    is changed while the Array<double> object will remain unchanged.  
    */

    Array<int> intArray1;
    Array<int> intArray2;
    Array<double> doubleArray;
    cout<<intArray1.DefaultSize()<<endl;
    cout<<intArray2.DefaultSize()<<endl;
    cout<<doubleArray.DefaultSize()<<endl;
    intArray1.DefaultSize(15);
    cout<<intArray1.DefaultSize()<<endl;
    cout<<intArray2.DefaultSize()<<endl;
    cout<<doubleArray.DefaultSize()<<endl;
}