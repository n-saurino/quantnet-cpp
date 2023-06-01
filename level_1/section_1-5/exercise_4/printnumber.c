#include <stdio.h>

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