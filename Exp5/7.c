#include <stdio.h>
int main(void)
{
    int a = 25;
    int b = 2;
    float c = 25.0;
    float d = 2.0;
    printf("6 + a / 5 * b = %i\n", 6 + a / 5 * b);
    printf("a / b * b = %i\n", a / b * b);
    printf("c / d * d = %f\n", c / d * d);
    printf("-a = %i\n", -a);
    float e = -a * b;
    printf("e = %f\n", e);
    int x = 5;
    printf("%d %d", x++, ++x);
    return 0;
}
/*different arithmetic operations
x++, ++x means post-increment and pre-increment */