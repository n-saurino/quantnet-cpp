/* Operators */
#include <iostream>

using namespace std;

int main(){
    int x;

    x=-3+4*5-6;
    printf("x=%d\n", x); // prints 11

    x=3+4%5-6;
    printf("x=%d\n", x); // prints 1

    x=-3*4%-6/5;
    printf("x=%d\n", x); // prints 0

    x=(7+6)%5/2;
    printf("x=%d\n", x); // prints 1

    return 0;

}