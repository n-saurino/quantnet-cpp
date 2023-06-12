#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/*
PROMPT
Create a C-program that counts how many times each of the numbers 0-4 have been
typed. Use a switch-case construction. Use default to count the number of other
characters. The input will be halted with ^Z (EOF). EOF means End-of-File and is
defined in <stdio.h>. Thus, the constant EOF can be used in a condition (test if EOF has
been typed).

Print the amount of times a certain number has been typed.
*/

// Prints the frequency of the characters 0-4 and any other characters after reading input from the user.
// Uses a switch-case statement to count the characters
// NOTES: Counting white space and new line characters as other characters but not terminating characters

int main(){

    int zero, one, two, three, four, other, input;
    zero = one = two = three = four = other = input = 0;

    printf("Please enter your input from the keyboard:\n");
    while((input = getchar()) != EOF && input != 26 && input != 4){
        switch (input)
        {
        case 48:
            zero++;
            break;
        
        case 49:
            one++;
            break;
        
        case 50:
            two++;
            break;
        
        case 51:
            three++;
            break;
        
        case 52:
            four++;
            break;
        
        default:
            other++;
            break;
        }
    }

    printf("0 frequency: %d\n", zero);
    printf("1 frequency: %d\n", one);
    printf("2 frequency: %d\n", two);
    printf("3 frequency: %d\n", three);
    printf("4 frequency: %d\n", four);
    printf("Other character frequency: %d\n", other);
    

    return 0;
}