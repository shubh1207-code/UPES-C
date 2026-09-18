/*#include <stdio.h>

int main()
{
    float a, b, result;
    char op;

    printf("Enter First operator value: ");
    scanf("%f", &a);

    printf("Enter Second operator value: ");
    scanf("%f", &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        result = a + b;
        printf("%.2f + %.2f = %.2f\n", a, b, result);
        break;
    case '-':
        result = a - b;
        printf("%.2f - %.2f = %.2f\n", a, b, result);
        break;
    case '*':
        result = a * b;
        printf("%.2f * %.2f = %.2f\n", a, b, result);
        break;
    case '/':
        if (b != 0)
        {
            result = a / b;
            printf("%.2f / %.2f = %.2f\n", a, b, result);
        }
        else
        {
            printf("Error: Division by zero.\n");
        }
        break;
    default:
        printf("Error: Invalid operator.\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int n;
    char ch;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        printf("You entered: %d\n", n);

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &ch);

    } while (ch == 'y' || ch == 'Y');

    printf("Loop terminated.\n");

    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}*/
#include <stdio.h>
int main()
{
    int a[5] = {-2, 100, 0, 7, 6};
    int temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorted array in descending order: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Sorted array in ascending order: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}