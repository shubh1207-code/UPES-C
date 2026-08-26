#include <stdio.h>
int main()
{
    signed char sc = 200; // 200 is outside signed range (−128 to 127)
    unsigned char uc = 200;
    printf("signed char   = %d\n", sc); // Will print a negative number (wrap-around)
    printf("unsigned char = %d\n", uc); // 200
    return 0;
}