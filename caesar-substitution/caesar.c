#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[1])
{
    // Checking the argv command
    if(argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for(int x = 0; x < strlen(argv[1]); x++)
    {
        if(isalpha(argv[1][x]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    int k = atoi(argv[1]);

    string ptext = get_string("Plaintext: ");
    printf("Ciphertext: ");

    for(int i = 0; i < ptext[i]; i++)
    {
        char c = ptext[i];
        if(isalpha(c))
        {
            char m = 'A';
            if(islower(c))
            {
                m = 'a';
            }
            printf("%c", (c - m + k) % 26 + m);
        }
        else
        {
            printf("%c", c);
        }
    }

    printf("\n");
    return 0;
}
