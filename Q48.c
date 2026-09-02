/*
Q48: Write a program to print the following pattern:
1
12
123
1234
12345


Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/
#include <stdio.h>
void printstar(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", i + 1);
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