#include <stdio.h>
/*int main()
{
    int a[100], b[100], n, i, j;
    printf("Enter the number of elements in the array a: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element in array a: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Enter the number of elements in the array b: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element in array b: ", i + 1);
        scanf("%d", &b[i]);
    }
    printf("Array a: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nArray b: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    int c[100];
    for (i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
    }
    printf("Sum of the two arrays: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
    return 0;
}
*/
int main()
{
    int m, n;
    printf("Enter the number of rows:");
    scanf("%d", &m);
    printf("Enter the number of columns:");
    scanf("%d", &n);
    int matrix[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element [%d][%d] of first matrix:", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("First matrix:\n");
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
            printf("Enter element [%d][%d] of second matrix:", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    printf("Second matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }
    int sum[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = matrix[i][j] + matrix2[i][j];
        }
    }
    printf("Sum of the two matrices:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}