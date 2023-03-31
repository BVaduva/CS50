#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "cs50.h"

int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    // Short and easy way to uppercase characters and ignoring punctuation at the same time thanks to function toupper
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}

/* without ctype.h lib

string s = get_string("Before: ");
printf("After: ");
for (int i = 0, n = strlen(s); i < n; i++)
{
    // If character s, current location in array [i], is greater than or equal to a
    // We compare letters to numbers because letters have assigned numbers (a=97, z=122)
    // ' instead of " because it gives comparison error and doesn't print uppercase
    if (s[i] >= 'a' && s[i] <= 'z')
    {
        // Uppercase letters have a ASCII value of -32 compared to their lowercase equivalent. So UPPERCASE is printed
        printf("%c", s[i] - 32);
    }
    else
    {
        printf("%c", s[i]);
    }
}
printf("\n");
*/

/*
string s = get_string("Before: ");
printf("After:  ");
for (int i = 0, n = strlen(s); i < n; i++)
{
    // islower alone is possible, but not elegant, because we have still to subtract in the printing.
    //if (islower(s[i]))
    {
        // printf("%c", s[i] - 32); // So we use toupper
        printf("%c", toupper(s[i]));
    }
    else
    {
        printf("%c", s[i]);
    }
}
printf("\n");
*/