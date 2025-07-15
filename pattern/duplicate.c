#include <stdio.h>

int main()
{
    int a[100], n, i, j, count = 0;
    printf("Enter size of Array : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element :");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i+1; i < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                break;
            }
        }
    }
    printf("count = %d", count);
    return 0;
}