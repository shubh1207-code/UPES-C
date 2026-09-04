#include <stdio.h>

int main()
{
    float p, n, r, si;
    int count = 1;

    while (count <= 3)
    {
        printf("Set %d:\n", count);
        printf("Enter Principal (p): ");
        scanf("%f", &p);
        printf("Enter Time in years (n): ");
        scanf("%f", &n);
        printf("Enter Rate of interest (r): ");
        scanf("%f", &r);

        si = (p * n * r) / 100;
        printf("Simple Interest = %.2f\n\n", si);

        count++;
    }

    return 0;
}

/*
#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, sum;
    sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("Array elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nSum = %d\n", sum);

    return 0;
}*/