#include <stdio.h>
struct data
{
    int id;
    char name[10];
    float sal;
};
int main()
{
    struct data d;
    FILE *p;
    p = fopen("record.dat", "rb");
    fread(&d, sizeof(struct data), 1, p);
    printf("%d\t%s\t%.0f\n,d.id,d.name,d.sal");
    fclose(p);
    return 0;
}

