#include <stdio.h>

/*
PROMPT: Try to create a function Swap(). This function must exchange the value of two variables.
For example: if i=123 and j=456, then i=456 and j=123 after the Swap() function has
been called. 

The variables i and j are declared, initialised and printed in the
function main(). This problem can be solved by using pointers as arguments for
the Swap()function.
*/

// We are defining a Swap function that takes two integer pointers and swaps the values in those memory locations using an additional temp variable
// The values are defined in main and the memory addresses to those variables are passed as arguments to Swap(). Results are printed to standard out.

void Swap(int*, int*);

int main()
{
    int i, j;
    i = 123;
    j = 456;

    printf("Before Swap():\n");
    printf("i: %d\nj: %d\n", i, j);

    Swap(&i, &j);
    printf("After Swap():\n");
    printf("i: %d\nj: %d", i, j);

}

void Swap(int* i, int* j) {
    int temp;
    temp = *j;
    *j = *i;
    *i = temp;
}
