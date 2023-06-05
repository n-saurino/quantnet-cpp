/* Predict what will be printed on the screen */
// Solutions are in-line and also in a block comment below the main function
#include <stdio.h>
#define PRD(a) printf("%d", (a) ) // Print decimal
#define NL printf("\n"); // Print new line
// Create and initialse array
int a[] = { 0, 1, 2, 3, 4 };
int main()
{
	int i;
	int* p;
	for (i = 0; i <= 4; i++) PRD(a[i]); // 1: prints 01234
	NL; // prints a new line character
	for (p = &a[0]; p <= &a[4]; p++) PRD(*p); // 2: prints 01234
	NL; // prints a new line character
	NL; // prints a new line character
	for (p = &a[0], i = 0; i <= 4; i++) PRD(p[i]); // 3: prints 01234
	NL; // prints a new line character
	for (p = a, i = 0; p + i <= a + 4; p++, i++) PRD(*(p + i)); // 4: prints 024
	NL; // prints a new line character
	NL; // prints a new line character
	for (p = a + 4; p >= a; p--) PRD(*p); // 5: prints 43210
	NL; // prints a new line character
	for (p = a + 4, i = 0; i <= 4; i++) PRD(p[-i]); // 6: prints 43210, at first I thought this was undefined behavior
	NL; // prints a new line character
	for (p = a + 4; p >= a; p--) PRD(a[p - a]); // 7: prints 43210
	NL; // prints a new line character
	return 0;
}

/* SOLUTION
01234
01234

01234
024

43210
43210
43210
*/
