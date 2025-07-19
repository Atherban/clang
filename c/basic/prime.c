#include <stdio.h>

// Function to check if number is prime
int isPrime(int num)
{
    if (num <= 1)
        return 0; // not prime

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0; // not prime
    }
    return 1; // prime
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPrime(number))
        printf("%d is a Prime Number.\n", number);
    else
        printf("%d is NOT a Prime Number.\n", number);

    return 0;
}
