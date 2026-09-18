// Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    int matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element [%d][%d] of first matrix: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("First Matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int matrix2[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element [%d][%d] of second matrix: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("Second Matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    int multiply[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            multiply[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                multiply[i][j] += matrix[i][k] * matrix2[k][j];
            }
        }
    }
    printf("Product of the matrices:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", multiply[i][j]);
        }
        printf("\n");
    }
    return 0;
}