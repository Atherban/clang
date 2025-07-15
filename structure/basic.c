#include <stdio.h>
struct student
{
    int id;
    char name[10];
};

int main()
{
    struct student *s, s1;
    s = &s1;
    printf("Enter ID and Name : \n");
    scanf("%d%s", &s1.id, s1.name);
    printf("%d\t%s", s->id, s->name);
    printf("%d\t%s", (*s).id, (*s).name); // Other Method
    return 0;
}