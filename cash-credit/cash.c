#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Prompt the user for the amount of change
    float change;
    do
    {
        change = get_float("Change: ");
    }
    while(change < 0);

    // Calculate the amount of coins needed and print the result
    if(change == 0)
    {
        printf("You'll need 0 coins!\n");
    }
    else
    {
        float c = round(change * 100);
        int x = 0;
        while(c >= 25)
        {
            c -= 25;
            x++;
        }

        while(c >= 10)
        {
            c -= 10;
            x++;
        }

        while(c >= 5)
        {
            c -= 5;
            x++;
        }

        while(c >= 1)
        {
            c -= 1;
            x++;
        }

        printf("You'll need at least %i coins!\n", x);
    }
}