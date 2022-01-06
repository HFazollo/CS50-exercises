#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float n;
    do
    {
        n = get_float("Change: ");
    }
    while(n <= 0); // n = dollars

    int c = round(n * 100); // c = cents
    int x = 0; // x = coins

    while(c >= 25)
    {
        c = c - 25;
        x++;
    }

    while(c >= 10)
    {
        c = c - 10;
        x++;
    }

    while(c >= 5)
    {
        c = c - 5;
        x++;
    }

    while(c >= 1)
    {
        c = c - 1;
        x++;
    }

    printf("You'll need at least %i coins\n", x);
}