// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    printf("Enter first string: ");
    if (fgets(a, sizeof(a), stdin) == NULL)
    {
        return 1;
    }
    printf("Enter second string: ");
    if (fgets(b, sizeof(b), stdin) == NULL)
    {
        return 1;
    }

    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    int counts[256] = {0};
    for (int i = 0; a[i] != '\0'; i++)
    {
        counts[(unsigned char)a[i]]++;
    }
    for (int i = 0; b[i] != '\0'; i++)
    {
        counts[(unsigned char)b[i]]--;
    }

    int are_anagrams = 1;
    for (int i = 0; i < 256; i++)
    {
        if (counts[i] != 0)
        {
            are_anagrams = 0;
            break;
        }
    }

    printf("%s\n", are_anagrams ? "Anagrams" : "Not anagrams");
    return 0;
}