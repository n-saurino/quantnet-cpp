#include <stdio.h>

// Demonstrates the difference between pre and post decrement by printing results to screen

int main(){
    int i = 1;

    printf("Predecrement:\n");
    printf("i:%d\n", i);
    printf("--i:%d\n", --i);
    
    i = 1;
    printf("\nPostdecrement:\n");
    printf("i:%d\n", i);
    printf("i--:%d\n",i--);
    printf("i:%d\n",i);
}