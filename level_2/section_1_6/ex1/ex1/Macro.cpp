#include <stdio.h>
#include "Defs.h" // including header file that contains the print macros

/*
PROMPT: 
Write a C-program that contains two print macro calls. The first prints the variable a, the
second prints the variables a and b. Printing happens by the use of the PRINT1 and
PRINT2 macros that accept arguments. These macros must be defined in an include-file.

The variables a and b gets their value in the function main().
Name the program “Macro.c” and the include-file “Defs.h”. Don’t forget to implement
the mechanism to avoid multiple inclusion of the header file.
*/

// This program prints the characters a & b using the macros defined in the Defs.h header file

int main() {
	char a = 'a';
	char b = 'b';
	PRINT1(a);
	PRINT2(a, b);
}