/*
Sum and average of array elements in C
14 oct 2026
12:10 p.m.
Made by Shubh Agarwal
*/
#include <stdio.h>
void ReadArray(int a[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element of array: ", i + 1);
        scanf("%d", &a[i]);
    }
}

void CalculateSum(int a[100], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("Sum of array elements: %d\n", sum);
}
void CalculateAverage(int a[100], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    float average = (float)sum / n;

    printf("Average of array elements: %.2f\n", average);
}

int main()
{
    int n;
    int b[100];
    printf("Enter number of elements of array:");
    scanf("%d", &n);
    ReadArray(b, n);
    CalculateSum(b, n);
    CalculateAverage(b, n);
    return 0;
}