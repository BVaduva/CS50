#include <ctype.h>
#include "cs50.h"
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("PLayer 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    // https://www.asciitable.com/
    int sum = 0;
    for (int i = 0; i < strlen(word); i++)
    {
        word[i] = tolower(word[i]);
        switch (word[i])
        {
        case 'a':
        case 'e':
        case 'i':
        case 'l':
        case 'n':
        case 'o':
        case 'r':
        case 's':
        case 't':
        case 'u':
            sum++;
            break;
        case 'd':
        case 'g':
            sum += 2;
            break;
        case 'b':
        case 'c':
        case 'm':
        case 'p':
            sum += 3;
            break;
        case 'f':
        case 'h':
        case 'v':
        case 'w':
        case 'y':
            sum += 4;
            break;
        case 'k':
            sum += 5;
            break;
        case 'j':
        case 'x':
            sum += 8;
            break;
        case 'q':
        case 'z':
            sum += 10;
            break;
        }
    }
    return sum;
}