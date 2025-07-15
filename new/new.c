#include <stdio.h>

void decimalToBinary(int n)
{
    int binary = 0;
    int base = 1;

    while (n > 0)
    {
        binary += (n % 2) * base;
        n /= 2;
        base *= 10;
    }

    printf("Binary: %d", binary);
}

int main()
{
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Please enter a non-negative integer.\n");
    }
    else
    {
        decimalToBinary(num);
    }

    return 0;
}