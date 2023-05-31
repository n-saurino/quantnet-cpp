#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/*
PROMPT
Write a C-program that asks for text input from the keyboard. The output of this
program should be the amount of characters, the amount of words and the amount of
newlines that have been typed. Multiple consecutive spaces shouldnot be counted as
multiple words.
*/

// NOTES: I counted all characters including whitespace and new line characters. Did not count the terminating character ('EOF'/CTRL+Z/D).


int main(){

    int input, chars, words, lines;
    chars = words = 0;
    lines = 1;
    int word_flag = 0;

    printf("Please enter your input from the keyboard:\n");
    while((input = getchar()) != EOF && input != 26 && input != 4){
        chars++;
        // printf("input: %d", input);
        switch (input)
        {
        case 10:
            lines++;
            word_flag = 0;
            break;
        
        case 32:
            word_flag = 0;
            break;
        
        case 9:
            word_flag = 0;
            break;
        
        default:
            if(!word_flag){
                word_flag = 1;
                words++;
            }
            break;
        }
    }

    printf("chars: %d\n", chars);
    printf("words: %d\n", words);
    printf("lines: %d\n", lines);

    return 0;
}