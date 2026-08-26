// Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Binary representation of %d is: ", a);
    if (a == 0)
    {
        printf("0");
    }
    else
    {
        int binary[32];
        int i = 0;
        while (a > 0)
        {
            binary[i] = a % 2;
            a = a / 2;
            i++;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            printf("%d", binary[j]);
        }
    }
    return 0;
}