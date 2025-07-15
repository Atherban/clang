#include <stdio.h>

void printSpaces(int count)
{
    for (int i = 0; i < count; i++)
    {
        printf(" ");
    }
}

void printStars(int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("* ");
    }
}

int main()
{
    int n = 5; // Half height of the diamond
    int i;

    for (i = 1; i <= n; i++)
    {
        printSpaces(2 * (n - i));
        printStars(2 * i - 1);
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--)
    {
        printSpaces(2 * (n - i));
        printStars(2 * i - 1);
        printf("\n");
    }

    return 0;
}