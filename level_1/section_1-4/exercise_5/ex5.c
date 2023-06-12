#include <stdio.h>

/*
PROMPT: Create a C-program that prints two columns on the screen with the temperature in
degrees Celsius in the left column and degrees Fahrenheit in the right column.

Start with 0 degrees Celsius and proceed until 19 degrees Celsius. Take steps of 1 degree.

Print degrees Fahrenheit with 1 position after the comma. Also print a header text.

The result must be obtained using a for construction!
*/

// This program takes user input for the min and max temperature in Celsius and then prints a conversion table
// between Celsius and Fahrenheit for all values in that range using a for loop.

int main(){

    double min_c;
    double max_c;
    double curr_f;
    double curr_c;

    printf("Please input the minimum temperature in Celsius: ");
    scanf("%lf", &min_c);

    printf("Please input the maximum temperature in Celsius: ");
    scanf("%lf", &max_c);

    printf("\nCelsius to Fahrenheit Conversion Table\n");
    printf("--------------------------------------\n");
    printf("%10.1s\t%10.1s\n", "C", "F");
    for(curr_c = min_c; curr_c <= max_c; curr_c++){
        curr_f = ((curr_c)/(5.0/9.0)) + 32;
        printf("%10.1lf\t%10.1lf\n", curr_c, curr_f);
    }

    return 0;
}