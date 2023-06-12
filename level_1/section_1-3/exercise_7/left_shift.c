#include <stdio.h>

// Performs the function val*2^n using bit shifts and prints the result to standard out

int main() {
    int val;
    int n;
    printf("Please enter an integer value to multiply by: ");
    scanf("%d", &val);
    
    printf("Please enter an integer value for n: ");
    scanf("%d", &n);
    

    val <<= n;

    printf("val << n (i.e. val*2^n) evaluates to: %d\n" , val);
}