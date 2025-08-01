#include <stdio.h>

int main()
{
    int num, first, end, mid, found = 0;
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int *p = arr;
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Enter number to find: ");
    scanf("%d", &num);

    first = 0;
    end = n - 1;

    while (first <= end)
    {
        mid = (first + end) / 2;

        if (*(p + mid) == num)
        {
            printf("Number %d found at index %d.\n", num, mid);
            found = 1;
            break;
        }
        else if (num > *(p + mid))
        {
            first = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (!found)
    {
        printf("Number %d not found in the array.\n", num);
    }

    return 0;
}
