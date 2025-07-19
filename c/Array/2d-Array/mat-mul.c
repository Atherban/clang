#include <stdio.h>

int main()
{
    int mat1[100][100], mat2[100][100], product[100][100];
    int rows1, cols1, rows2, cols2, i, j, k;

    printf("Enter number of rows for matrix 1: ");
    scanf("%d", &rows1);
    printf("Enter number of columns for matrix 1: ");
    scanf("%d", &cols1);

    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter number of rows for matrix 2: ");
    scanf("%d", &rows2);
    printf("Enter number of columns for matrix 2: ");
    scanf("%d", &cols2);

    if (cols1 != rows2)
    {
        printf("Matrix multiplication not possible!\n");
        return 1;
    }

    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nMatrix 1:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols1; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix 2:\n");
    for (i = 0; i < rows2; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            product[i][j] = 0;
            for (k = 0; k < cols1; k++)
            {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("\nProduct Matrix:\n");
    for (i = 0; i < rows1; i++)
    {
        for (j = 0; j < cols2; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}