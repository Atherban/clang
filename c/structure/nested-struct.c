#include <stdio.h>
struct course
{
    char c_name[30];
};
struct student
{
    int id;
    char name[30];
    float marks;
    struct course c1;
};

int main()
{
    struct student s;
    printf("Enter Details of Student \n");
    printf("Enter ID : ");
    scanf("%d", &s.id);
    printf("Enter NAME : ");
    scanf("%s", s.name);
    printf("Enter MARKS : ");
    scanf("%f", &s.marks);
    printf("Enter COURSE : ");
    scanf("%s", s.c1.c_name);

    printf("DETAILS :\n");
    printf("Enter Details of Student \n");
    printf(" ID : %d", s.id);
    printf("\n NAME : %s", s.name);
    printf("\n MARKS : %f", s.marks);
    printf("\n COURSE : %s", s.c1.c_name);
    return 0;
}