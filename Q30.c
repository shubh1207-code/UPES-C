// Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int reversed = 0;
    while (a != 0)
    {
        reversed = reversed * 10 + a % 10;
        a = a / 10;
    }
    printf("Reversed number: %d\n", reversed);
    return 0;
}