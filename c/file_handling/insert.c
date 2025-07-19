#include <stdio.h>

struct data
{
    int id;
    char name[100];
    float sal;
};

int main()
{
    struct data d[100];
    FILE *p;
    int n;

    printf("Enter the total number of Records: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the ID, NAME, SALARY for record %d: ", i + 1);
        scanf("%d %s %f", &d[i].id, d[i].name, &d[i].sal);
    }

    p = fopen("records.csv", "a");
    if (p == NULL)
    {
        printf("Failed to open the file.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(p, "%d,%s,%.2f\n", d[i].id, d[i].name, d[i].sal);
    }

    fclose(p);
    printf("Records saved to file successfully.\n");

    return 0;
}
