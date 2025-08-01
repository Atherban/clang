// Selection Sort
#include <stdio.h>
int main()
{
    int i, n, j, min, temp;
    int arr[] = {3, 45, 1, 55, 90, 65, 2};
    n = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    printf("Sorted Array :\n");
    printf("[ ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]");

    return 0;
}