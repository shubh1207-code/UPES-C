#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a, b;

    printf("Enter First integer: ");
    scanf("%d", &a);
    printf("\nEnter Second integer: ");
    scanf("%d", &b);

    printf("\na = %d, b = %d\n\n", a, b);

    printf("a > b  : %s\n", (a > b) ? "true" : "false");
    printf("a < b  : %s\n", (a < b) ? "true" : "false");
    printf("a >= b : %s\n", (a >= b) ? "true" : "false");
    printf("a <= b : %s\n", (a <= b) ? "true" : "false");
    printf("a == b : %s\n", (a == b) ? "true" : "false");
    printf("a != b : %s\n", (a != b) ? "true" : "false");

    return 0;
}
