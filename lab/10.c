#include <stdio.h>
int main()
{
    int a = 10, b = 5, result;
    result = (a > b) && (b != 10) && (b < 11);
    printf("AND Result = %d\n", result); // 1
    result = (a < 5) || (b == 5);
    printf("OR Result  = %d\n", result); // 1
    result = !(a > 5);
    printf("NOT Result = %d\n", result); // 0
    return 0;
}