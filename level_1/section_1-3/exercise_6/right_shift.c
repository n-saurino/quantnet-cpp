#include <stdio.h>

// Shifts the binary values of an integer two places to the right and prints the result to standard out

int main() {
    int val;
    printf("Please enter the integer value for the right shift: ");
    scanf("%d", &val);

    val >>= 2;
    printf("val >> 2 evaluates to: %d\n" , val);
    printf("It is a logical shift of the binary values two spots to the right.");

}