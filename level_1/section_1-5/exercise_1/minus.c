#include <stdio.h>

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
