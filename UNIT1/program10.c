#include <stdio.h>

void main()
{
    int a[3][3], b[3][3], c[3][3], i, j;

    printf("\nEnter values for Matrix A\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nEnter Value [%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter values for Matrix B\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nEnter Value [%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nEnter values for Matrix C\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nEnter Value [%d][%d] : ", i, j);
            scanf("%d", &c[i][j]);
        }
    }

    printf("\nMatrix A\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%5d", b[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix C\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%5d", c[i][j]);
        }
        printf("\n");
    }
}

