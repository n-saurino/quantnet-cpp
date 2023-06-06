#include <stdio.h>
/*
PROMPT: Alter the last program of exercise 1 in such a way that the output doesn’t go to the screen
but is written to a file. The file to write to must be specified by the user.
*/

// This program reads in a file name of 100 characters or less from the user using scanf_s().
// It then opens the file and uses a while loop with getchar() and fputc() to read from user input and print it to the file specified by the user.
// Finally, we close the file.
// File should be in the master folder for the exercise


int main() {
	int c;
	char filename[100];
	printf("Type in the filename and hit enter: ");
	scanf_s("%s", filename, sizeof(filename));
	char buffer; // had to use to pick up the extra new line character that is picked up when the user hits enter after entering the file name
	buffer = getchar(); // getting rid of new line character 
	printf("Now enter the text to be saved into your file:\n");

	FILE* file;
	if(fopen_s(&file, filename, "w") != 0){
		printf("Error opening the file.\n");
		return 1;
	}

	while ((c = getchar()) != EOF && c != 1) {
		fputc(c, file);
	}

	fclose(file);
	
	return 0;
}