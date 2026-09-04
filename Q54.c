/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *



Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j < a - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < (2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = a - 1; i > 0; i--)
    {
        for (int j = 0; j < a - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < (2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}