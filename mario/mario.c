#include <cs50.h>
#include <stdio.h>

int get_mario_pyramid(void);

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while(h < 1 || h > 8); // h = height

    for(int i = 0; i < h; i++) // i = row
    {
        for(int s = 0; s < h - i - 1; s++) // s = spaces
        {
            printf(" ");
        }

        for(int j = 0; j <= i; j++) // j = column
        {
            printf("#");
        }

        printf("  ");

        for(int j = 0; j <= i; j++)
        {
            printf("#");
        }

        printf("\n");
    }
}