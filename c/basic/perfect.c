#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
            sum = sum + i;
        }
    }
    if (sum == n)
    {
        printf("The Number is Perfect Number");
    }
    else
    {
        printf("Number is Not prefect");
    }
    return 0;
}