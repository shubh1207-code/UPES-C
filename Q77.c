// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

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
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    // Check if the elements on the diagonal are distinct
    int isDistinct = 1;
    for (int i = 0; i < m && i < n; i++)
    {
        for (int j = i + 1; j < m && j < n; j++)
        {
            if (matrix[i][i] == matrix[j][j])
            {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct)
        {
            break;
        }
    }
    if (isDistinct)
    {
        printf("The elements on the diagonal are distinct.\n");
    }
    else
    {
        printf("The elements on the diagonal are not distinct.\n");
    }
    return 0;
}