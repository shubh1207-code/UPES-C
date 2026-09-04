/*
Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345


Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }

        for (int k = n - i; k <= n; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}