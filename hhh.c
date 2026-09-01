#include <stdio.h>
int num = 100;
int main()
{
    printf("Global num=%d\n", num);
    int num = 223;
    printf("Local num=%d\n", num);
    {
        int num = 2;
        printf("More local num=%d\n", num);
    }
    return 0;
}