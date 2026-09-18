#include <stdio.h>
int main(void)
{
    int n, o, d;
    int a[20], b[20];
    int count = 0;
    int is_palindrome = 1;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a positive number.\n");
        return 1;
    }

    o = n;

    do
    {
        d = n % 10;
        a[count] = d;
        b[count] = d;
        count++;
        n /= 10;
    } while (n != 0);

    for (int i = 0; i < count; i++)
    {
        if (a[i] != b[count - i - 1])
        {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome)
        printf("%d is a palindrome number.\n", o);
    else
        printf("%d is not a palindrome number.\n", o);

    return 0;
}