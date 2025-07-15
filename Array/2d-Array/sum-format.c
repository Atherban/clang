#include <stdio.h>

int main()
{
    int arr[100][100], i, j, m, n;

    // Input dimensions
    printf("Enter number of rows: ");
    scanf("%d", &i);
    printf("Enter number of columns: ");
    scanf("%d", &j);

    // Input matrix elements
    printf("Enter Elements:\n");
    for (m = 0; m < i; m++)
    {
        for (n = 0; n < j; n++)
        {
            scanf("%d", &arr[m][n]);
        }
    }

    printf("\nMatrix with Row and Column Sums:\n");

    // Calculate and display row sums
    for (m = 0; m < i; m++)
    {
        int rSum = 0;
        for (n = 0; n < j; n++)
        {
            printf("%4d ", arr[m][n]);
            rSum += arr[m][n];
        }
        printf("|%5d\n", rSum);
    }

    // Calculate and display column sums
    for (n = 0; n < j; n++)
    {
        int cSum = 0;
        for (m = 0; m < i; m++)
        {
            cSum += arr[m][n];
        }
        printf("%4d ", cSum);
    }
    printf("|%5d\n", 0); // Optional: can remove this line if you don't want the bottom-right cell

    return 0;
}