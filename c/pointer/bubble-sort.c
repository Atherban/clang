// Bubble sort using Pointer

#include <stdio.h>

int main()
{
    int a[] = {2, 5, 1, 8, 90, 23, 6};
    int n = sizeof(a) / sizeof(a[0]);
    int *p;
    p = a;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            int temp;
            if (*(p + j) > *(p + j + 1))
            {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    return 0;
}