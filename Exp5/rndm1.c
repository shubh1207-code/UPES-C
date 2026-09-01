#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a, b;

    printf("Enter First integer: ");
    scanf("%d", &a);
    printf("Enter Second integer: ");
    scanf("%d", &b);

    printf("\na = %d, b = %d\n\n", a, b);

    printf("(a > 0) && (b > 0) : %s\n", (a > 0 && b > 0) ? "true" : "false");

    printf("(a > 0) || (b > 0) : %s\n", (a > 0 || b > 0) ? "true" : "false");

    printf("!(a > 0)           : %s\n", (!(a > 0)) ? "true" : "false");

    int x = 25;
    printf("\nChecking if x = %d lies between 1 and 50:\n", x);
    printf("(x > 0) && (x < 50) : %s\n", (x > 0 && x < 50) ? "true" : "false");

    return 0;
}