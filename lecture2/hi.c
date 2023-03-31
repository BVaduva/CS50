#include <stdio.h>
#include "cs50.h"

int main(void)
{
    string words[2];

    words[0] = "HI!";
    words[1] = "BYE!";

    printf("%s\n", words[0]);
    printf("%s\"", words[1]);
    // Overly complicated: strings are arrays of characters. So you can call an array of a string (words[0]) and their character within "[x]"
    // printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);
    // printf(%c%c%c%c\n", words[1][0], words[1][1], words[1][2], words[1][3]);
}
/*
{
    string s = "HI!";
    // %c stands for char value, %i for integer value. So %c will print HI! and %i will print numerics
    // "HI!" has 3 arrays, but we ask for a 4th([3]) to be printed. This will go beyond the string and give NUL, or 0 back
    printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]);
}


// char type needs to be declared with singular quotations (') or it gives errors.
    char c1 = 'H';
    char c2 = 'I';
    char c3 = '!';

    printf("%c%c%c\n", c1, c2, c3);
    // or printf(%i %i %i\n", c1, c2, c3);
    // we can also ad () before c1 etc. to convert the following datatype to the one set in the () i. e. (int)c1, converts c1 to an int



string s = "HI!";
printf("%s\n", s);
// because strings are just chars with arrays, we can do something like this
printf("%i %i %i\n, s[0], s[1], s[2]")
*/