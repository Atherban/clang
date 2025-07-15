#include <stdio.h>

int main()
{
    int a[100], n, i, j, prime;
    printf("Enter size of Array : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element :");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        prime = 0;
        for (j = 2 ; j <= a[i] / 2; j++)
        {
            if (a[i] % j == 0)
            {
                prime = 1;
                break;
            }
            
        }
        if (prime == 0)
        {
            printf("%d \n", a[i]);
        }
    }
    return 0;
}