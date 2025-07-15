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

    int d = ((arr[0][0]) * (arr[1][1]) - ((arr[1][0]) * (arr[0][1])));
    arr[0][0] = arr[0][0] + arr[1][1];
    arr[1][1] = arr[0][0] + arr[1][1];
    arr[0][0] = arr[0][0] - arr[1][1];
    arr[0][1] = -arr[1][0];
    arr[1][0] = -arr[0][1];

    printf("Inverse : \n");
    for (m = 0; m < i; m++)
    {
        for (n = 0; n < j; n++)
        {
            printf("%d ", arr[m][n] / d);
        }
        printf("\n");
    }

    return 0;
}
