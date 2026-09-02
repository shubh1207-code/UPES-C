/* Q47: Write a program to print the following pattern:
*
**
***
****
*****


Sample Test Cases:
Input 1:

Output 1:
*
**
***
****
*****

*/

#include <stdio.h>
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
    printf("\n");
}
int main()
{

    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    {
        for (int i = 0; i < n; i++)
        {
            printstar(i + 1);
            // printf("\n");
        }
    }

    return 0;
}