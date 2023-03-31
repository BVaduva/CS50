// index = 0.0588 * L - 0.296 * S - 15.8
// where L is the average number of letters per 100 words in the ntext, and S is the average number of sentences per 100 words in the text.

// Prompt user
// Program should count the number of letters, words and sentences. Spaces indicate a new word. Period/Exclamation point etc. indicate end of sentence
// Output "Grade X" where X is the grade level computed by the formular, round to nearest integer. If more than 16 do "16+" if 1 or less "Before grade 1"

#include <stdio.h>
#include "cs50.h"
#include <ctype.h>
#include <string.h>
#include <math.h>

// Prototypes
int count_letters(string text, int len);
int count_words(string text, int len);
int count_sentences(string text, int len);

// MAIN
int main(void)
{
    string input = get_string("Text: ");
    int len = strlen(input);
    // float is needed to give exact divisons. so 100 / 56 is 1.x instead of 1 which won't calculate right
    float letters = count_letters(input, len);
    float words = count_words(input, len);
    float sentences = count_sentences(input, len);
    float grade = 0.0588 * (letters * (100 / words)) - 0.296 * (sentences * (100 / words)) - 15.8;
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        // printf("%.0f letters\n%.0f words\n%.0f sentences\n", letters, words, sentences);
        //  round is needed to round the grade needed for the text to get an clear grade
        printf("Grade %.0f\n", round(grade));
    }
}

// Functions
int count_letters(string text, int len)
{
    int letters = 0;

    for (int i = 0; i < len; i++)
    {
        // isalpha checks for alphanumericals. [i] checks each array in the string. Checks as long as the text is and increments "letters"
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

int count_words(string text, int len)
{
    int words = 1;

    for (int i = 0; i < len; i++)
    {
        // checks string arrays for whitespace. single quotationmarks (') are needed or it gives an error.
        if (text[i] == ' ')
        {
            words++;
        }
    }
    return words;
}

int count_sentences(string text, int len)
{
    int sentences = 0;

    for (int i = 0; i < len; i++)
    {
        // like checking for words, just multiple symbols to checks to indicate a sentence
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }
    return sentences;
}