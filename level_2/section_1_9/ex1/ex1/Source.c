#include <stdio.h>

/*
Create a C-program that reads the characters from the keyboard and shows them on
screen (the inputted characters should only be displayed when the user hits 'enter', line
by line).

When ^A is entered, the program must end properly. Then the following message will
appear: “CTRL + A is a correct ending.”

Tip: getchar() reads and putchar() writes the type int. The value of ^A is 1
*/

// This program reads user input with a while loop using getchar()
// and prints to console with putchar() until it reads CTRL+A (value of 1)

int main() {

	int c;

	printf("Please enter your input:\n");

	while ((c = getchar()) != EOF && c != 1) {
			putchar(c);
	}

	return 0;
}