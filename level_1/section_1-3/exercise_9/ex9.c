/* Conditional expressions */
#include <stdio.h>
int main()
{
    int x=1;
    int y=1;
    int z=1;
    x+=y+=x; // x = 1 + 2 = 4, y = 2
    printf("%d\n\n", (x<y)?y:x); // Number 1: prints 3 because x > y therefore evaluates to x
    printf("%d\n", (x<y)?x++:y++); // Number 2: prints 2 because x > y therefore evaluates to y
    printf("%d\n", x); // Number 3: prints 3 because x++ never executed in logic
    printf("%d\n", y); // Number 4: prints 3 because y++ executed in ternary operator
    return 0;
}