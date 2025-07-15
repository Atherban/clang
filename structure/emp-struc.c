#include <stdio.h>
struct employee
{
    int empid;
    char empname;
    int salary;
};

void empInput(struct employee emp[])
{
    int n;
    printf("Enter Number of EMPLOYEES : ");
    scanf("%d", &n);
    for (int i = 0; i < 5; i++)
    {
        printf("Employee %d :\n", i + 1);
        printf("Enter ID : ");
        scanf("%d", &emp[i].empid);
        printf("Enter NAME : ");
        scanf("%s", emp[i].empname);
        printf("Enter MARKS : ");
        scanf("%d", &emp[i].salary);
    }
}
void displayEmp(struct employee emp[])
{
    for (int i = 0; i < 5; i++)
    {
        if (emp[i].salary > 20000)
        {
            printf("Employee %d :\n", i + 1);
            printf(" ID : ", emp[i].empid);
            printf(" NAME : ", emp[i].empname);
            printf(" SALARY : ", emp[i].salary);
        }
    }
}

int main()
{
    struct employee emp[100];
    empInput(emp);
    displayEmp(emp);
    return 0;
}