#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long b;
    do
    {
        b = get_long("Start Size: ");
    }
    while(b < 9);

    int e;
    do
    {
        e = get_int("End Size: ");
    }
    while(e < b);

    if(e == b)
    {
        printf("Years: 0\n");
    }
    else
    {
        int y = 0;
        do
        {
            b = b + (b/3) - (b/4);
            y++;
        }
        while(b < e);

        printf("Years: %i\n", y);
    }
}