#include <stdio.h>

void shiftZeros(int arr[], int n, int toRight)
{
    int pos = toRight ? 0 : n - 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[pos] = arr[i];
            pos += toRight ? 1 : -1;
        }
    }

    while (toRight ? (pos < n) : (pos >= 0))
    {
        arr[pos] = 0;
        pos += toRight ? 1 : -1;
    }
}

int main()
{
    int arr[] = {1, 0, 2, 0, 3, 0, 4, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int choice;

    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nShift direction (0=left, 1=right): ");
    scanf("%d", &choice);

    shiftZeros(arr, n, choice);

    printf("Result: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}