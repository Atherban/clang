#include <stdio.h>
int main()
{

    int arr[100], n, i, arr1[100], arr2[100], mid;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    mid = n % 2;
    if (mid != 0)
    {
        printf("Array cannot be divided as the index id odd . \n");
    }
    else
    {

        printf("Enter the Elements of the Array : \n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("Array : \n");
        printf("[ ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("]");

        printf("\nSplitted Array : \n");
        printf("Part 1 : \n");
        for (i = 0; i < n / 2; i++)
        {
            arr1[i] = arr[i];
            printf("%d ", arr1[i]);
        }
        printf("\nPart 2 : \n");
        for (i = n / 2; i < n; i++)
        {
            arr2[i] = arr[i];
            printf("%d ", arr2[i]);
        }
    }

    return 0;
}