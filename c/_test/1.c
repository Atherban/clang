#include <stdio.h>
void decimalToBinary(int num)
{
    int binary = 0, base = 1;
    while (num > 0)
    {
        binary += (num % 2) * base;
        num /= 2;
        base *= 10;
    }
    printf("%d ", binary);
}
int main()
{
    int num;
    printf("Enter the number to convert : ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Enter positive number\n");
    }
    else
    {
        decimalToBinary(num);
    }
    return 0;
}