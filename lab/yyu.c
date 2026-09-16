#include <stdio.h>
int main()
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
