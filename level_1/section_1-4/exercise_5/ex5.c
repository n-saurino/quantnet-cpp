#include <stdio.h>

int main(){

    double min_c;
    double max_c;
    double curr_f;
    double curr_c;

    printf("Please input the minimum temperature in Celsius: ");
    scanf("%lf", &min_c);

    printf("Please input the minimum temperature in celsius: ");
    scanf("%lf", &max_c);

    printf("\nFahrenheit to Celsius Conversion Table\n");
    printf("--------------------------------------\n");
    printf("%10.1s\t%10.1s\n", "C", "F");
    for(curr_c = min_c; curr_c <= max_c; curr_c++){
        curr_f = ((curr_c)/(5.0/9.0)) + 32;
        printf("%10.1lf\t%10.1lf\n", curr_c, curr_f);
    }

    return 0;
}