// WAP to find the sec largest element in the array using pointer.
#include <stdio.h>

int main()
{
    int n, max, max2;
    int arr[100];
    int *p = arr;
    printf("Enter the size of Array: ");
    scanf("%d", &n);
    printf("Enter Elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    max = p[0];
    max2 = p[0];
    for (int i = 1; i < n; i++)
    {
        if (p[i] > max)
        {
            max2 = max;
            max = p[i];
        }
        else if (p[i] > max2 && p[i] != max)
        {
            max2 = p[i];
        }
    }
    printf("Second largest element is: %d\n", max2);
    return 0;
}
