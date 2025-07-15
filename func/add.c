#include <stdio.h>

int add()
{
    int a, b;
    printf("Enter the value of numbers :\n");
    scanf("%d%d", &a, &b);
    return a + b;
}

int main()
{
    int c;
    c = add();
    printf("Result : %d ", c);
    return 0;
}
