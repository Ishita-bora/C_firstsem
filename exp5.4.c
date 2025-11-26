#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, p, q, i, j, k, sum;
    int a[10][10], b[10][10], c[10][10];

    printf("Enter number of rows and columns for Matrix A: ");
    scanf("%d%d", &m, &n);

    printf("Enter number of rows and columns for Matrix B: ");
    scanf("%d%d", &p, &q);

    if (n != p)
    {
        printf("Matrices cannot be multiplied!\n");
        return 0;
    }

    printf("Enter elements of Matrix A:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            sum = 0;
            for (k = 0; k < n; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }

    printf("\nMatrix A:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    printf("\nResultant Matrix C (A * B):\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}