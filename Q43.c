// Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    int sum = 0;
    int temp = a;
    while (temp != 0)
    {
        int digit = temp % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++)
        {
            factorial *= i;
        }
        sum += factorial;
        temp /= 10;
    }
    if (sum == a)
    {
        printf("Strong number");
    }
    else
    {
        printf("Not strong number");
    }
    return 0;
}