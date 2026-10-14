/*
Second largest element in array in C
14 oct 2026
12:35 p.m.
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
int findSecondLargest(int a[100], int n)
{
    if (n < 2)
    {
        printf("Enter more elements");
        return 0;
    }
    int max = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    int second;
    int f = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != max)
        {
            if (f == 0 || a[i] > second)
            {
                second = a[i];
                f = 1;
            }
        }
    }
    if (f == 1)
    {
        printf("Second Largest element is %d", second);
    }
    else
    {
        printf("No second largest element");
    }
}
int main()
{
    int a[100], n;
    printf("Enter number of elements of array:");
    scanf("%d", &n);
    ReadArray(a, n);
    findSecondLargest(a, n);
    return 0;
}