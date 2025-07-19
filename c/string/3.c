// remove whitespaces
#include <stdio.h>

int main()
{
    char str[100] = "He ll o hi";
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("Result: %s\n", str);
    return 0;
}