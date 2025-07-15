#include <stdio.h>

void lowerToUpper(char str[10])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = str[i] - 32;
    }
    printf("%s", str);
}

void upperToLower(char str[10])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = str[i] + 32;
    }
    printf("%s", str);
}

int main()
{
    char str[10];
    printf("Enter the String : ");
    scanf("%s", str);
    upperToLower(str);
    return 0;
}