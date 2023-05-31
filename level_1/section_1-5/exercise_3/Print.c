#include <stdio.h>

// NOTE: Must compile using -c flag (i.e. gcc Print.c -c -o print)

int print(double i){
    printf("i*2 = %0.1lf", i*2);
    return 0;
}