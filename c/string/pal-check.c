#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char ch[10];
    int i = 0;
    int len = strlen(ch);
    printf("Enter the String : ");
    scanf("%s", ch);
    while (i < len - 1)
    {
        if (ch[i] != ch[len - 1])
        {
            printf("\nNot Palindrome");
            exit(0);
        }
        i++;
        len--;
    }
    printf("\nPalindrome");

    return 0;
}