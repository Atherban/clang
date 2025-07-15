#include <stdio.h>

int main()
{
    int n = 5; 
    int i, j, space;

    // Upper half of the diamond
    for (i = 1; i <= n; i++)
    {
        // Print leading spaces
        for (space = 1; space <= n - i; space++)
        {
            printf(" ");
        }

        // Print stars
        printf("*");
        if (i > 1)
        {
            for (j = 1; j <= 2 * i - 3; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    // Lower half of the diamond
    for (i = n - 1; i >= 1; i--)
    {
        // Print leading spaces
        for (space = 1; space <= n - i; space++)
        {
            printf(" ");
        }

        // Print stars
        printf("*");
        if (i > 1)
        {
            for (j = 1; j <= 2 * i - 3; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}