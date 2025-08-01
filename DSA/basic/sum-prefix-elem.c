// WAP to print the sum of prefix of Array
#include <stdio.h>

int main()
{
    int n;
    int arr[10];
    int sum = 0;

    printf("Enter the size of Array: ");
    scanf("%d", &n);

    printf("Enter Elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Sum of Prefix:\n");
    for (int i = 0; i < n; i++)
    {
        sum = arr[i] + arr[i - 1];
        printf("Prefix sum up to index %d: %d\n", i, sum);
    }

    return 0;
}
