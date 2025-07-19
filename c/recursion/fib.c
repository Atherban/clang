#include <stdio.h>

int fib(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    printf("Enter term number to find in Fibonacci series: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Error: Term number cannot be negative.\n");
    }
    else
    {
        printf("Fibonacci(%d) = %d\n", n, fib(n));
    }

    return 0;
}