// Linear Search on a Sorted 2D Array
#include <stdio.h>

int main()
{
    int arr[10][10], n, num, found = 0;

    printf("Enter Size of Array (n x n): \n");
    scanf("%d", &n);

    printf("Enter Elements of the Array:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Entered Array:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Enter element to search: ");
    scanf("%d", &num);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == num)
            {
                printf("Element found at position [%d][%d]\n", i, j);
                found = 1;
                break;
            }
        }
        if (found)
            break;
    }

    if (!found)
    {
        printf("Element not found.\n");
    }

    return 0;
}
