#include <stdio.h>
int main()
{
    char ch[100];
    int len = 0;
    printf("Enter the string : ");
    scanf("%s", ch);
    for (int i = 0; ch[i] != '\0'; i++)
    {
        len++;
    }
    printf("%d", len);
    return 0;
}