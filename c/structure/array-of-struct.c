
#include <stdio.h>
struct student
{
    int id;
    char name[10];
    float marks;
};

int main()
{
    struct student s[10];
    printf("Enter Details of students : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Student %d :\n", i + 1);
        printf("Enter ID : ");
        scanf("%d", &s[i].id);
        printf("Enter NAME : ");
        scanf("%s", s[i].name);
        printf("Enter MARKS : ");
        scanf("%f", &s[i].marks);
    }           

    printf("Student DATA :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Student %d :\n", i + 1);
        printf(" ID : %d\n", s[i].id);
        printf(" NAME : %s\n", s[i].name);
        printf(" MARKS : %f\n", s[i].marks);
    }
    return 0;
}