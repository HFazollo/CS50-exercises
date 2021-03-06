#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int compute_letters(string text);
int compute_words(string text);
int compute_sentences(string text);

int main(void)
{
    // Prompt the user for a Text
    string text = get_string("Text: ");

    float letters = compute_letters(text);
    float words = compute_words(text);
    float sentences = compute_sentences(text);

    // Define a value for L and S with the formula
    float L = (letters / words) * 100;
    float S = (sentences / words) * 100;

    // Calculate the grade
    float grade = round((0.0588 * L) - (0.296 * S) - 15.8) + 0.5;

    // Print the grade level
    if(grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if(grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", (int) grade);
    }
}

// Calculate the amount of letters in the text
int compute_letters(string text)
{
    int lett = 0;
    int len = strlen(text);
    for(int i = 0; i < len; i++)
    {
        if(isalpha(text[i]))
        {
            lett++;
        }
    }
    return lett;
}

// Calculate the amount of words in the text
int compute_words(string text)
{
    int words = 0;
    int len = strlen(text);

    for(int i = 0; i < len; i++)
    {
        if(text[i] == ' ' || text == (void *)0)
        {
            words++;
        }
    }
    return words + 1;
}

// Calculate the amount of sentences in the text
int compute_sentences(string text)
{
    int sentences = 0;
    int len = strlen(text);

    for(int i = 0; i < len; i++)
    {
        if(text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}