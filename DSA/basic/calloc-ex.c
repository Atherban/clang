#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("You entered:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
        sum += ptr[i];
    }

    printf("\nSum of Elements: %d\n", sum);

    return 0;
}
