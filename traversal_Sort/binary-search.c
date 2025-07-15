#include <stdio.h>

int main()
{

    int a[100], i, n, data, mid, first = 0, last = n - 1;
    printf("Enter size of Array : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter %d Element : ", i);
        scanf("%d", &a[i]);
    }
    printf("Enter the number to find : ");
    scanf("%d", &data);

    while (first <= last)
    {
        mid = (first + last) / 2;
        if (data == a[mid])
        {
            printf("Data Found at Index : %d", mid);
        }
        else if (data > a[mid])
        {
            first = mid + 1;
            if (data == a[first])
            {
                printf("Data Found at Index : %d", first);
            }
        }
        else
        {
            last = mid - 1;
            if (data = a[last])
            {
                printf("Data Found at Index : %d", first);
            }
        }
    }

    return 0;
}