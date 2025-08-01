// WAP to implement Linear Search using Pointer
#include <stdio.h>

int main()
{
    int n, num, found = 0;
    int arr[100];
    int *p = arr;
    printf("Enter Size of Array: ");
    scanf("%d", &n);
    printf("Enter Elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("Enter value to search: ");
    scanf("%d", &num);
    for (int i = 0; i < n; i++)
    {
        if (*(p + i) == num)
        {
            printf("Element %d found at index %d.\n", num, i);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Element %d not found in the array.\n", num);
    }
    return 0;
}
