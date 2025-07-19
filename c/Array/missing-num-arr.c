#include <stdio.h>

int findMissingNumber(int arr[], int n)
{
    int x1 = arr[0];
    int x2 = arr[0];

    for (int i = 1; i < n; i++)
    {
        x1 = x1 ^ arr[i];
    }
    printf("Final x1 = %d\n", x1);
    for (int i = 2; i <= n + 1; i++)
    {
        x2 = x2 ^ i;
    }
    printf("Final x2 = %d \n", x2);
    return (x1 ^ x2);
}

int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int missing = findMissingNumber(arr, n);
    printf("Missing number is: %d\n", missing);

    return 0;
}