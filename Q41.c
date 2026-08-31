// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d", &a);
    int lastDigit = a % 10;
    int firstDigit = a;
    while (firstDigit >= 10)
    {
        firstDigit /= 10;
    }
    int numDigits = 0;
    int temp = a;
    while (temp != 0)
    {
        numDigits++;
        temp /= 10;
    }
    if (numDigits == 1)
    {
        printf("Number of digits is 1, no swap needed.");
    }
    else
    {
        // Calculate power of 10 for number of digits
        int powerOf10 = 1;
        for (int i = 0; i < numDigits - 1; i++)
        {
            powerOf10 *= 10;
        }

        // Construct: lastDigit at front + middle digits + firstDigit at end
        int newNumber = lastDigit * powerOf10;
        int middlePart = (a % powerOf10) / 10;
        newNumber += middlePart * 10 + firstDigit;

        printf("Number after swapping first and last digits is %d", newNumber);
    }
    return 0;
}