/* Assignment operators */
#include <stdio.h>

int main()
{
    int x=2;
    int y;
    int z;

    x*=3+2; // x = 2*5 = 10
    printf("x=%d\n", x); // prints x=10
    
    x*=y=z=4; // x = 10*4 = 40, y=4, z=4
    printf("x=%d\n", x); // prints x=40
    
    x=y==z; // x = 1 because y and z are the same therefore y==z evaluates to TRUE or 1
    printf("x=%d\n", x); // prints x=1
    
    return 0;
}