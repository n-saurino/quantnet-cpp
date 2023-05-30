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

    int input, last_char, chars, words, lines;
    last_char = '\n';
    chars = words = lines = 0;

    printf("Please enter your input from the keyboard:\n");
    while((input = getchar()) != EOF){
        chars++;
        if(input == '\n'){
            lines++;
        }

        if(input != ' ' && last_char == ' '){
            words++;
        }
    }

    printf("chars: %d\n", chars);
    printf("words: %d\n", words);
    printf("lines: %d\n", lines);

    return 0;
}