#include <stdio.h>
#include <stdlib.h>
/*
PROMPT: Alter the last program of exercise 1 in such a way that the output doesn’t go to the screen
but is written to a file. The file to write to must be specified by the user.
*/



int main() {
	int c;
	char file_name[30];
	printf("Type in the filename and hit enter: ");
	while ((c = getchar()) != EOF && c != 1) {

	}

	File* file;
	file = fopen(file_name, "w");
	
	return 0;
}