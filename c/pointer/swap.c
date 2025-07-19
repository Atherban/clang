// Swap value of 2 variables using pointers

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int a = 10, b = 20;
    printf("Original value befor swapping : %d %d \n", a, b);
    swap(&a, &b);
    printf("Value After swapping : %d %d \n", a, b);
    return 0;
}