#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], word[100], max[100];
    int len = 0, i = 0, j = 0;
    printf("Enter String : ");
    gets(str);
    while (1)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            word[j] = str[i];
            j++;
        }
        else
        {
            word[j] = '\0';
            if (j > len)
            {
                len = j;
                strcpy(max, word);
            }
            j = 0;
        }
        if (str[i] == '\0')
        {
            break;
        }
        i++;
    }

    printf("%s", max);
    return 0;
}