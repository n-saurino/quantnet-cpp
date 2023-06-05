#include <stdio.h>
#include <string.h>

/*PROMPT: Create a C-program that has a function DayName()which can print the day of a given
day-number. 

For example:
1 gives: Day 1 is a Sunday
7 gives: Day 7 is a Saturday.

The day-name (1-7) should be written "hard-coded” into the program using an array of
strings.
*/

void DayName(int day);

int main() {
	int day = 0;
	DayName(day);
	return 0;
}


void DayName(int day) {
	
	// Create a 2D Character array
	char days[7][30];

	// Copy the string into each array element using strcpy
	strcpy_s(days[0], sizeof("Monday"), "Monday");
	strcpy_s(days[1], sizeof("Tuesday"), "Tuesday");
	strcpy_s(days[2], sizeof("Wednesday"), "Wednesday");
	strcpy_s(days[3], sizeof("Thursday"), "Thursday");
	strcpy_s(days[4], sizeof("Friday"), "Friday");
	strcpy_s(days[5], sizeof("Saturday"), "Saturday");
	strcpy_s(days[6], sizeof("Sunday"), "Sunday");
	
	printf("%d gives: Day %d is a %s", day, day, days[day]);

}