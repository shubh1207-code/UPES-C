#include <stdio.h>
int main()
{
    int a = 10, b = 5, result;
    result = (a > b) && a++;
    printf("%d\n", result); // result = 1
    printf("%d\n", a);      // a = 11
    return 0;
}