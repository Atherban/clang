#include <stdio.h>

int main()
{

    int arr[100][100], count = 0, i, j, m, n;
    printf("Enter number of rows : ");
    scanf("%d", &i);
    printf("Enter number of columns : ");
    scanf("%d", &j);
    printf("Enter Elements : ");
    for (m = 0; m < i; m++)
    {
        for (n = 0; n < j; n++)
        {
            scanf("%d", &arr[m][n]);
        }
    }

    printf("\nMatrix : \n");
    for (m = 0; m < i; m++)
    {
        for (n = 0; n < j; n++)
        {
            printf("%d ", arr[m][n]);
        }
        printf("\n");
    }

    for (m = 0; m < i; m++)
    {
        for (n = 0; n < j; n++)
        {
            if (m == n && arr[m][n] == 1)
            {
                count = 1;
            }
        }
        printf("\n");
    }

    if (count == 1)
    {
        printf("The Given Matrix is an Identity Matrix \n");
    }
    else
    {
        printf("The Given Matrix is not an Identity Matrix \n");
    }

    return 0;
}