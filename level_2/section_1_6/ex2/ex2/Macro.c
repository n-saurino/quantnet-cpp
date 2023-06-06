#include "Defs.h"
#include <stdio.h>

/*
PROMPT: Create the two macros MAX2(x,y) and MAX3(x,y,z). These macros must return the
maximum value of the given arguments. Let the macro MAX3 make use of the macro
MAX2. Add these macros to the file “Defs.h”.
*/

// We are initializing 3 integers and checking the max value between them using the macros defined in the Defs.h header file

int main() {
	int x, y, z;
	x = 1;
	y = 2;
	z = 3;
	printf("Max of %d and %d is %d\n", x, y, MAX2(x,y));
	printf("Max of %d, %d and %d is %d\n", x, y, z, MAX3(x, y, z));
	return 0;
}