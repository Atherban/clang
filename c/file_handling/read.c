#include <stdio.h>

struct data
{
    int id;
    char name[100];
    float sal;
};

int main()
{
    struct data d;
    FILE *p;

    p = fopen("records.csv", "r");
    if (p == NULL)
    {
        printf("Failed to open the file for reading.\n");
        return 1;
    }

    printf("Records from file:\n");
    printf("ID\tName\tSalary\n");
    printf("---------------------------\n");

    while (fscanf(p, "%d,%[^,],%f\n", &d.id, d.name, &d.sal) == 3)
    {
        printf("%d\t%s\t%.2f\n", d.id, d.name, d.sal);
    }

    fclose(p);
    return 0;
}
