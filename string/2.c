// compare two strings
#include <stdio.h>
int main()
{
    char ch1[100], ch2[100];
    int count = 0;
    printf("\nEnter 1st String : ");
    scanf("%s", ch1);
    printf("\nEnter 2nd String : ");
    scanf("%s", ch2);
    for (int i = 0; ch1[i] != '\0' && ch2[i] != '\0'; i++)
    {
        if (ch1[i] == ch2[i])
        {
            printf("Character ' %c '  are same .\n", ch1[i]);
        }
        else
        {
            printf("Charcter ' %c ' are not same.\n", ch1[i]);
        }
    }

    return 0;
}