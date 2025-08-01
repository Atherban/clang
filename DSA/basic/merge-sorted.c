// Merge Sorted Array , the resultant Array should also be sorted
#include <stdio.h>

int main()
{
    int arr[20], arr1[10] = {1, 3, 5, 7, 9}, arr2[10] = {2, 4, 6};
    int n1 = 5, n2 = 3;
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
            arr[k++] = arr1[i++];
        else
            arr[k++] = arr2[j++];
    }

    while (i < n1)
        arr[k++] = arr1[i++];
    while (j < n2)
        arr[k++] = arr2[j++];

    printf("Merged Sorted Array:\n");
    for (int i = 0; i < k; i++)
        printf("%d ", arr[i]);

    return 0;
}
