#include <stdio.h>

void Swap(int*, int*);

int main()
{
    int i, j;
    i = 123;
    j = 456;

    printf("Before Swap():\n");
    printf("i: %d\nj: %d\n", i, j);

    Swap(&i, &j);
    printf("After Swap():\n");
    printf("i: %d\nj: %d", i, j);

}

void Swap(int* i, int* j) {
    int temp;
    temp = *j;
    *j = *i;
    *i = temp;
}
