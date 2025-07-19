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

    printf("Matrix : \n");
    for (m = 0; m < i; m++)
    {
        for (n = 0; n < j; n++)
        {
            printf("%d ", arr[m][n]);
        }
        printf("\n");
    }

    printf("Right Diagonal Element : \n");
    for (m = 0; m < i; m++)
    {
        for (n = 0; n < j; n++)
        {
            if (m == n)
            {
                printf("%d", arr[m][n]);
            }
        }
        printf("\n");
    }
    printf("Left Diagonal Element : \n");
    for (m = 0; m < i; m++)
    {
        for (n = 0; n < j; n++)
        {
            if (m + n == 2)
            {
                printf("%d", arr[m][n]);
            }
        }
        printf("\n");
    }
    printf("Non - Diagonal Element : \n");
    for (m = 0; m < i; m++)
    {
        for (n = 0; n < j; n++)
        {
            if (m != n)
            {
                printf("%d ", arr[m][n]);
            }
        }
        printf("\n");
    }
    return 0;
}