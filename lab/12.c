#include <stdio.h>
int main()
{
    int a = 10, b = 5, result;
    result = (a > b) || a++;
    printf("%d\n", result); // prints 1
    printf("%d\n", a);      // prints 10
    a = 1;
    b = 6;
    result = a-- && ++b;
    printf("%d %d %d\n", result, a, b); // result = 1, a = 0, b = 7
    a = 1;
    b = 6;
    result = --a && ++b;
    printf("%d %d %d\n", result, a, b); // result = 0, a = 0, b = 6
    return 0;
}