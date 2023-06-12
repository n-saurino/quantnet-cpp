#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/*
PROMPT
Extend the program of exercise 6 in such a way that the frequency of number 3 is shown
in words.

E.g.: Number three appears two times.

Only print the frequency when it is smaller than three. If the frequency is three or larger,
then print: "The number three appears more than two times."
*/

// Prints the frequency of the characters 0-4 and any other characters after reading input from the user.
// Uses a switch-case statement to count the characters
// Also uses a switch-case statement to print the results of the character '3' based on the instructions
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
    
    switch(three){
        case 0:
            printf("Number three appears zero times.\n");
            break;
        
        case 1:
            printf("Number three appears one time.\n");
            break;

        case 2:
            printf("Number three appears two times.\n");
            break;

        default:
            printf("The number three appears more than two times.\n");
            break;
    }

    printf("4 frequency: %d\n", four);
    printf("Other character frequency: %d\n", other);
    

    return 0;
}