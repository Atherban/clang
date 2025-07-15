#include <stdio.h>
int main()
{

    int i, j;
    for (i = 1; i <= 5; i++)
    {
        if (i == 5 || j == 1 || i == j)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}