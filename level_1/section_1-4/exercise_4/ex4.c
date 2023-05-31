#include <stdio.h>

int main(){

    double min_f;
    double max_f;
    double curr_f;
    double curr_c;

    printf("Please input the minimum temperature in Fahrenheit: ");
    scanf("%lf", &min_f);

    printf("Please input the minimum temperature in Fahrenheit: ");
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