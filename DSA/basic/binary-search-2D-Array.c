// Binary Search in a Sorted 2D Array
#include <stdio.h>

int main()
{
    int arr[100][100] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};
    int n = 3;
    int m = 3;
    int num, found = 0;

    printf("Enter element to search: ");
    scanf("%d", &num);

    int start = 0, end = n * m - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        int i = mid / m;
        int j = mid % m;

        if (arr[i][j] == num)
        {
            printf("Element %d found at position [%d][%d]\n", num, i, j);
            found = 1;
            break;
        }
        else if (arr[i][j] < num)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (!found)
    {
        printf("Element not found in the array.\n");
    }

    return 0;
}
