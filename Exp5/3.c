#include <stdio.h>
int main()
{
    char ch = 'a';
    printf("Character = %c\n", ch); // a
    printf("ASCII     = %d\n", ch); // 97
    ch = ch + 1;                    // Move to next character
    printf("Next char = %c\n", ch); // b
    return 0;
}
/*Creates a character variable with the value 'a'
Prints the character and its ASCII value
Increments the character by 1
Prints the next character and its ASCII value*/