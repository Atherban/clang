#include <stdio.h>

void factorial()
{
    int a;
    printf("Enter the value to find the factorial : ");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return;
    }

    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    printf("Factorial of number %d is : %d ", a, fact);
}

void fib()
{

    int n;
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid input. Number of terms should be positive.\n");
        return;
    }

    printf("Fibonacci Series: ");
    int a = 0, b = 1, c;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

void hcf()
{
    int num1, num2;
    printf("Enter two numbers to find HCF: ");
    scanf("%d %d", &num1, &num2);

    int a = num1, b = num2;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("HCF of %d and %d is %d\n", num1, num2, a);
}

void lcm()
{
    int num1, num2;
    printf("Enter two numbers to find LCM: ");
    scanf("%d %d", &num1, &num2);
    int a = num1, b = num2;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int lcm = (num1 * num2) / a;
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n1.Factorial\n2.Fibonacci Series\n3.HCF\n4.LCM\n");
        printf("Enter your chice [1-4] : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            factorial();
            break;

        case 2:
            fib();
            break;

        case 3:
            hcf();
            break;

        case 4:
            lcm();
            break;

        default:
            printf("Invalid Choice\n");
        }
    }
}