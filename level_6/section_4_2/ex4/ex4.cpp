#include <iostream>
#include "PointArray.h"


using namespace std;

int main(){

    /*
    Testing the Point array
    */

    PointArray pointArray1;
    PointArray pointArray2;

    for(int i = 0; i < pointArray1.Size(); i++){
        pointArray1[i] = Saurino::CAD::Point(i,i);
        cout << pointArray1[i] << endl;
    }

    pointArray2 = pointArray1;

    cout << pointArray2.Length() << endl;
}