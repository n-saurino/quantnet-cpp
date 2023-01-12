#include <iostream>

using namespace std;

int main() {    
    float base;
    float height; 
    cout << "Please enter the base of the triangle: ";
    cin >> base;
    cout << "Please enter the height of the triangle: ";
    cin >> height;

    printf("The surface area of the triangle is %f\n", base*height/2);
    
    return 0;
}