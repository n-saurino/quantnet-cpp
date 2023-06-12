#include <stdio.h>

/*
PROMPT: Write a C-program that calls a function minus(). This function receives two arguments
and returns the difference (regular subtraction, not absolute). This difference should be
printed on screen
*/

// This program subtracts two doubles using the minus function and prints the result to standard out

double minus(double x, double y);

int main(){
    minus(7, 2.5);
    return 0;
}

double minus(double x, double y){
    double result;
    result = x - y;
    printf("%0.1lf - %0.1lf = %0.1lf", x, y, result);
    return result;
}
