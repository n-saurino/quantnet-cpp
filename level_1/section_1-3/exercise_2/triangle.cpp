#include <iostream>

using namespace std;

int main() {    
    float base;
    float height; 
    printf("Please enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Please enter the height of the triangle: ");
    scanf("%f", &height);

    printf("The surface area of the triangle is %f\n", base*height/2);
    
    return 0;
}