#include <stdio.h>

// Prompts the user for base and height values and calculates the surface area of a triangle with a 90 degree angle and prints the result to standard out

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