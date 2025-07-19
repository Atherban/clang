#include <stdio.h>
int main()
{
    FILE *p;
    char str[100];
    p = fopen("data.txt","r");
    fgets(str, 100, p);
    printf("%s", str);
    fclose(p);
    return 0;
}