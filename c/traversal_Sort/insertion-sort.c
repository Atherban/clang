#include <stdio.h>

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int previous = i - 1;
        while (previous >= 0 && arr[previous] > temp)
        {
            arr[previous + 1] = arr[previous];
            previous--;
        }
        arr[previous + 1] = temp;
    }
    printf("\n[ ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n\n");
    return 0;
}