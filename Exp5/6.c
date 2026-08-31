#include <stdio.h>
int main()
{
    int a = 100, b = 2, c = 25, d = 4, result;
    result = a + b; // addition
    printf("a + b = %i\n", result);
    result = a - b; // subtraction
    printf("a - b = %i\n", result);
    result = b * c; // multiplication
    printf("b * c = %i\n", result);
    result = a / c; // division
    printf("a / c = %i\n", result);
    result = a + b * c; // precedence
    printf("a + b * c = %i\n", result);
    result = (a + b) * c;
    printf("(a + b) * c = %i\n", result);
    printf("a * b + c * d = %i\n", a * b + c * d);
    printf("a * (b + c) * d = %i\n", a * (b + c) * d);
    return 0;
}