#include <stdio.h>

/*
PROMPT: Write a recursive function printnumber() which gets the number to be printed. This
number is an integer. The function should print the number digit by digit by using
the putchar() function. Don’t use printf().

Tips: Use the modulo operator (%) to determine the digit to print. Use the division
operator (/) to calculate the argument for the recursive call. Don’t forget to handle
negative numbers correctly.
*/

// This program uses the function printnumber to recursively print the number passed in as an argument, character by character
// We use the modulus operator and the division operator to identify the characters to print and truncate the input value with each call
// There is special attention paid to whether the value is positive or negative using a "sign" flag and an if statement

int printnumber(int input);

int main(){

    printnumber(7367);
    printf("\n");
    printnumber(-7367);

    return 0;
}

int printnumber(int input){
    int remainder;
    int sign;
    sign = 0;
    if(input == 0){
        return 0;
    }
    if(input < 0){
        sign = 1;
        remainder = -input%10;
    }else{
        remainder = input%10;
    }
    // printf("%d", remainder);
    input = input / 10;
    char digit = remainder + '0';
    printnumber(input);
    if(input == 0 && sign == 1){
        putchar('-');
    }
    putchar(digit);
    return 0;

}