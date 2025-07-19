#include <stdio.h>

void print_hollow_square(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            if (i == 1 || j == 1 || i == size || j == size)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int size = 5;
    print_hollow_square(size);
    return 0;
}