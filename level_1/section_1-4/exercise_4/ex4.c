#include <stdio.h>

/* 
PROMPT: Create a C-program that prints two columns on the screen with the temperature in
degrees Fahrenheit and the equivalent temperature in degrees Celsius.

The left column shows the temperature in Fahrenheit. The right column shows the
temperature in Celsius.

Start with 0 degrees Fahrenheit and proceed until 300 degrees Fahrenheit. Take steps of
20 degrees. Print degrees Celsius with 1 position behind the comma (use “%10.1f” as
format specifier). Also print a header text.

Make the program maintenance insensitive, which means that the start- and endtemperature and the step size must be easy to adjust.
The result must be obtained using a while construction!

Tip: To calculate the degrees Celsius from degrees Fahrenheit use the following formula: Celsius = (5/9) * (Fahrenheit – 32)
*/

// This program takes user input for the min and max temperature in Fahrenheit and then prints a conversion table
// between Fahrenheit and Celsius for all values in that range.

int main(){

    double min_f;
    double max_f;
    double curr_f;
    double curr_c;

    printf("Please input the minimum temperature in Fahrenheit: ");
    scanf("%lf", &min_f);

    printf("Please input the maximum temperature in Fahrenheit: ");
    scanf("%lf", &max_f);
    
    curr_f = min_f;

    printf("\nFahrenheit to Celsius Conversion Table\n");
    printf("--------------------------------------\n");
    printf("%10.1s\t%10.1s\n", "C", "F");
    while(curr_f <= max_f){
        curr_c = (5.0/9.0)*(curr_f-32);
        printf("%10.1lf\t%10.1lf\n", curr_c, curr_f);
        curr_f += 20;
    }

    return 0;
}