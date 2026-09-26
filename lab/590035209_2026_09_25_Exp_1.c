/*
Making a arithmetic and logical alculator
25 Sept 2026
2:20 p.m.
Made by Shubh Agarwal
*/
#include <stdio.h>
int main()
{
    int choice;
    int a, b;
    char op;
    int sol;
    printf("Choose an option:\n1.Arithmetic Operations\n2.Logical Operations\n");
    scanf(" %d", &choice);
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    switch (choice)
    {
    case 1:
        printf("You chose Arithmetic Operations\n");
        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &op);
        switch (op)
        {
        case '+':
            sol = a + b;
            break;
        case '-':
            sol = a - b;
            break;
        case '*':
            sol = a * b;
            break;
        case '/':
            sol = a / b;
            break;
        default:
            printf("Invalid operator\n");
            return 1;
        }
        printf("Result: %d\n", sol);

    case 2:
        printf("You chose Logical Operations\n");
        if (a > b && b != 10)
        {
            printf("Result = a is bigger than b and b is not equal to 10\n");
        }
        else if (a < b || b == 10)
        {
            printf("Result = a is less than b or b is equal to 10\n");
        }
    default:
        printf("Invalid choice\n");
        return 1;
    }

    return 0;
}