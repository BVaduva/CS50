// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include "cs50.h"
#include <stdio.h>
#include <string.h>

string replace(string argv[]);

int main(int argc, string argv[])
{
    if (argc < 2)
    {
        printf("Missing Command-Line-Argument\n");
        return 1;
    }
    else if (argc > 2)
    {
        printf("Invalid Command-Line-Argument\n");
        return 1;
    }
    printf("%s\n", replace(argv));
}

string replace(string argv[])
{
    string leet = argv[1];
    for (int i = 0; i < strlen(leet); i++)
    {
        switch (leet[i])
        {
        case 'a':
        case 'A':
            leet[i] = '6';
            break;
        case 'e':
        case 'E':
            leet[i] = '3';
            break;
        case 'i':
        case 'I':
            leet[i] = '1';
            break;
        case 'o':
        case 'O':
            leet[i] = '0';
            break;
        }
    }
    return leet;
}