#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/*
Write a C-program that asks for text input from the keyboard. The output of this
program should be the amount of characters, the amount of words and the amount of
newlines that have been typed. Multiple consecutive spaces shouldnot be counted as
multiple words.
*/

int main(){

    int input, chars, words, lines;
    chars = words = 0;
    lines = 1;
    int word_flag = 0;

    printf("Please enter your input from the keyboard:\n");
    while((input = getchar()) != EOF && input != 26 && input != 4){
        chars++;
        // printf("input: %d", input);
        if(input == '\n'){
            lines++;
        }

        if(input == ' ' || input == '\n' || input == '\t'){
            word_flag = 0;
        }else if (!word_flag){
            word_flag = 1;
            words++;
        }
    }

    printf("chars: %d\n", chars);
    printf("words: %d\n", words);
    printf("lines: %d\n", lines);

    return 0;
}