// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main()
{
    int c, a, b;
    char op;
    printf("Enter The first number: ");
    scanf("%d", &c);
    printf("Enter The second number: ");
    scanf("%d", &a);
    printf("Enter The operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        printf("Result: %d\n", c + a);
        break;
    case '-':
        printf("Result: %d\n", c - a);
        break;
    case '*':
        printf("Result: %d\n", c * a);
        break;
    case '/':
        printf("Result: %d\n", c / a);
        break;
    case '%':
        printf("Result: %d\n", c % a);
        break;
    default:
        printf("Invalid operator!\n");
    }
    return 0;
}