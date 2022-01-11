#include <cs50.h>
#include <stdio.h>

int get_mario_pyramid(void);

int main(void)
{
    // Prompt the user for a height
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while(h < 1 || h > 8); 

    // Mount the pyramid
    for(int i = 0; i < h; i++) 
    {
        for(int s = 0; s < h - i - 1; s++) 
        {
            printf(" ");
        }

        for(int j = 0; j <= i; j++) 
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