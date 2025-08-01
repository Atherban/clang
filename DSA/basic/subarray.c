#include <stdio.h>

int main()
{
    int n;
    int arr[10];
    int count = 0;
    int sum = 0;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    printf("Enter Elements : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("All Subarrays:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            count++;
            for (int k = i; k <= j; k++)
            {
                printf("%d ", arr[k]);
                sum += arr[k]; // Sum of elements of Subarrays
            }
            printf("\tSum -> \t%d", sum); // Print Sum of elements of Subarrays
            printf("\n");
            sum = 0; // Reinitialize sum to 0 for other iterations
        }
    }

    printf("Total number of subarrays = %d\n", count);

    return 0;
}
