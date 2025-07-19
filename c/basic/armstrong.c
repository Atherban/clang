#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, counter = 0;
    float result = 0.0;

    printf("Enter Number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        counter++;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, counter);
        originalNum /= 10;
    }

    if ((int)result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}