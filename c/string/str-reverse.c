#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    int len = strlen(str) - 1;
    printf("Enter the String to Reverse : ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = str[len];
        len--;
    }
    return 0;
}