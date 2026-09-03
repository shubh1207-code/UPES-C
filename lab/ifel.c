#include <stdio.h>

int main()
{
    int num, absValue;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        absValue = -num;
    }
    else
    {
        absValue = num;
    }

    printf("Absolute value of %d is %d\n", num, absValue);

    return 0;
}
