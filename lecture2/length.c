#include <stdio.h>
#include "cs50.h"
#include <string.h>

// int string_length(string s);

int main(void)
{
    // Ask for user name and set to name
    string name = get_string("Name: ");
    // use name in function string_length and set it to length
    // int length = string_length(name);
    // Or we can just use the strlen function included in the string.h library
    int n = strlen(name);
    printf("%i\n", n);
}

/*
// Possible way to get the length of a string

int main(void)
{
    string name = get_string("Name: ");

    int i = 0;
    // Location [i](i set to 0) in the name of string - does NOT(!=) equal to \0 (NUL)
    while (name[i] != "\0")
    {
        i++
    }
    printf("%i\n", i);
}
*/

/* Function below is unnecessary due to string.h library

// (name), which is a string, was called from main and set as value s
int string_length(string s); // Int because it returns the length = number of a string
{
    int i = 0;
    // Location [i](set to 0) in the name of string - does it not equal to \0 (NUL)
    // Normal quotation marks make problems? - Because it checks for a char, not a string
    while (s[i] != '\0')
    {
        i++;
    }
    // returns the incremented number to string_length which is set as length
    return i;
}
*/