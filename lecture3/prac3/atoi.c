#include "cs50.h"
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

/* official hints
Start by getting the index of the last char in the string (the char before the \0)
Convert this char into its numeric value. Can you subtract some char to do this?
Remove the last char from the string by moving the null terminator one position to the left.
Return this value plus 10 times the integer value of the new shortened string.
Remember you need a base case when creating a recursive function. */

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert a string to int
    printf("%i\n", convert(input));
}

int convert(string input)
{
    int ori_len = strlen(input);

    // Exit condition
    if (ori_len == 1)
    {
        // How this works: (int) is the typecast to convert into an int.
        // Input is a string, but takes an int (ori_len - 1) as argument, which is read as ASCII and hence returnes the ASCII.
        //              (int) '5' - (int) '0' = 53 - 48 = 5
        return (int)input[ori_len - 1] - '0';
    }
    else
    {
        // Get last index = amount of indexes before null terminator.
        int last_index = ori_len - 1;

        // As in the if statement. last_index here is the ascii value of the char in the last index
        int ascii = input[last_index];

        // Overwrite the last index with null to shorten it.
        input[last_index] = '\0';

        // Return ascii value plus 10 times the integer value of the new shortened string
        return ascii + (10 * convert(input)) - '0';
    }
}