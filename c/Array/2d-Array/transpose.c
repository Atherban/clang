#include <stdio.h>

int main()
{

    int arr[100][100], i, j, m, n;
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

    printf("\n1st Transpose Matrix : \n");
    for (m = 0; m < i; m++)
    {
        for (n = 0; n < j; n++)
        {
            printf("%d ", arr[n][m]);
        }
        printf("\n");
    }

    printf("\nFinal Swap Matrix : \n");
    for (m = i; m > 0; m--)
    {
        for (n = 0; n > j; n++)
        {
            printf("%d ", arr[m][n]);
        }
        printf("\n");
    }
    return 0;
}