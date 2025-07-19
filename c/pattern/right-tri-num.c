#include <stdio.h>

int main()
{
    int n = 6;
    int i, j, k;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (k = 1; k <= 2 * (n - i) - 1; k++)
        {
            printf(" ");
        }
        if (i != n)
        {
            for (j = i; j >= 1; j--)
            {
                printf("%d", j);
            }
        }
        else
        {
            for (j = i - 1; j >= 1; j--)
            {
                printf("%d", j);
            }
        }

        printf("\n");
    }

    return 0;
}