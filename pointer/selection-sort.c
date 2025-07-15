#include <stdio.h>

void selectionSort(int *arr, int n)
{
    int *min_ptr, *current, *last = arr + n - 1;

    for (current = arr; current < last; current++)
    {
        min_ptr = current;
        for (int *ptr = current + 1; ptr <= last; ptr++)
        {
            if (*ptr < *min_ptr)
            {
                min_ptr = ptr;
            }
        }

        if (min_ptr != current)
        {
            int temp = *current;
            *current = *min_ptr;
            *min_ptr = temp;
        }
    }
}

int main()
{
    int n, i, arr[100];

    printf("Enter size of array : ");
    scanf("%d", &n);

    printf("Enter elements of Array :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal Array : \n[ ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");
    selectionSort(arr, n);

    printf("\nSorted Array (Selection Sort) : \n[ ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");

    return 0;
}