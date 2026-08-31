// Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    int sum = 0;
    while (a != 0)
    {
        sum += a % 10;
        a /= 10;
    }
    printf("Sum of digits is %d", sum);
    return 0;
}