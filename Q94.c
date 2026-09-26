// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter a sentence: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';
    char longest_word[100] = "";
    char *word = strtok(a, " ");
    while (word != NULL)
    {
        if (strlen(word) > strlen(longest_word))
        {
            strcpy(longest_word, word);
        }
        word = strtok(NULL, " ");
    }
    printf("Longest word: %s\n", longest_word);
    return 0;
}