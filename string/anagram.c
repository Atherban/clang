#include <stdio.h>

int main()
{
    int i, j, count = 1;
    char str[10];
    printf("Enter String : ");
    scanf("%s", str);
    printf("\n%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        str[i] == str[i + 1] ? printf("\nCount %c : %d", str[i], count) : printf("\n");
        count = 1;
    }

    return 0;
}