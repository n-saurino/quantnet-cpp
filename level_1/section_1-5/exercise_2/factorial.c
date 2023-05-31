#include <stdio.h>

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