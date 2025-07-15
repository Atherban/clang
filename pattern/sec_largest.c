#include <stdio.h>

int main()
{
    int a[100], n, i, j, max1, max2;
    printf("Enter size of Array : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element :");
        scanf("%d", &a[i]);
    }
    max1 = a[0];
    max2 = a[0];

    for (i = 0; i < n; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        if (a[i] < max1 && a[i] > max2)
        {
            max2 = a[i];
        }
    }
    printf("Largest :%d \nSecond Largest :%d ", max1, max2);
    return 0;
}