#include <stdio.h>

int main()
{
    int num, row, col, space;
    printf("Enter the number of Stars :");
    scanf("%d", &num);

    for (row = 1; row <= num; row++)
    {
        for (space = 1; space <= num - row; space++)
        {
            printf(" ");
        }

        for (col = 1; col <= 2 * row - 1; col++)
        {

            if (col == 1 || col == 2 * row - 1 || row == num)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}