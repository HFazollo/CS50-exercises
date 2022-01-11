#include <stdio.h>
#include<cs50.h>
#include <math.h>

int main(void)
{
long  x = get_long("enter the credit card number");
int  digit = 0, sum = 0;
// Digit is used for odd and even checker.
long y = x;

// Checksum card digits
while (y != 0)
{
    int sumeven = 0, sumodd = 0;
    int rem = y % 10;
    digit++;
    if (digit % 2 == 0)                        // If digit is even
    {
        int multiply = rem * 2;
        if (multiply == 0)
        {
            sumeven += multiply;
        }

        else
        {
            while (multiply != 0)                   // Adding all  digits after
            {
                sumeven += multiply % 10;
                multiply /= 10;                   // Minus last digit of multiply
            }
        }
    }
    else                                 // If digit is odd
    {
        sumodd += rem;
    }
    y /= 10;                              // Minus last digit from y

    sum += sumeven + sumodd;
}

// Check for valid credit card
if (digit != 13 && digit != 15 && digit != 16) // For first if
{
    printf("INVALID\n");
}

else if (sum % 10 == 0)
{
    if (digit == 16) // If digit is 16
    {
        if (x / 100000000000000 >= 51 && x / 100000000000000 <= 55)
        {
            printf("MASTERCARD\n");
        }
        else if (x / 1000000000000000 == 4)
        {
            printf("VISA\n");
        }
        else    // If digit is not 16
        {
            printf("INVALID\n");
        }
    }

    else if (digit == 15)
    {
        if (x / 10000000000000 == 34 || x / 10000000000000 == 37)
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }

    else  if (digit == 13)
    {
        if (x / 1000000000000 == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }

    }

}

else
{
    printf("INVALID\n");
}
}