#include <stdio.h>

void shiftZerosRight(int arr[], int n)
{
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
            arr[index++] = arr[i];
    }
    while (index < n)
        arr[index++] = 0;
}

void shiftZerosLeft(int arr[], int n)
{
    int index = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] != 0)
            arr[index--] = arr[i];
    }
    while (index >= 0)
        arr[index--] = 0;
}

int main()
{
    int arr[] = {1, 0, 2, 0, 3, 0, 4, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int choice;

    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nShift direction (0 = left, 1 = right): ");
    scanf("%d", &choice);

    if (choice == 1)
        shiftZerosRight(arr, n);
    else
        shiftZerosLeft(arr, n);

    printf("Modified array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
