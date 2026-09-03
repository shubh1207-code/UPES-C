#include <stdio.h>

int main()
{
    float p, n, r, si;
    int count = 1;

    while (count <= 2)
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