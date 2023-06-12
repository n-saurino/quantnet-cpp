#include <stdio.h>

/*
PROMPT: Write a C-program that prints the factorials of a number.
6! (six factorial) is the same as 6 * 5 * 4 * 3 * 2 * 1

Must make use of a recursive function.
*/

// This program recursively calls the factorial function until we reach the base case where our input is 1
// Then the factorial function returns 1 and multiplies the return value by the current input value 
// all the way back up the call stack.

int factorial(int input);

int main(){
    int val;
    int result;
    val = 6;
    result = factorial(val);
    printf("%d! = %d", val, result);
    return 0;
}

int factorial(int input){
    if(input == 1){
        return 1;
    }

    return input * factorial(input-1);

}