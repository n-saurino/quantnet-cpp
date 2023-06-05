#include "Defs.h"
#include <stdio.h>





int main() {
	int x, y, z;
	x = 1;
	y = 2;
	z = 3;
	printf("Max of %d and %d is %d\n", x, y, MAX2(x,y));
	printf("Max of %d, %d and %d is %d\n", x, y, z, MAX3(x, y, z));
	return 0;
}