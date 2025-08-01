#include <stdio.h>
int main()
{
    int a[5] = {1, 4, 6, 8, 9};
    int sum = 0;
    int *p = a;
    for (int i = 0; i < 5; i++)
    {
        if (i % 2 == 0)
        {
            sum += *(p + i);
        }
        else
        {
            sum -= *(p + i);
        }
        printf("%d\t", sum);
    }

    return 0;
}