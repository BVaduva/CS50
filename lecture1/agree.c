#include "cs50.h"
#include <stdio.h>

int main(void)
{
    // Prompt user to agree
    char c = get_char("Do you agree? ");

    // Checker whether user agreed; || equals to "or", && equals to "and"
    if (c == 'y' || c == 'Y') // single quotes (') have to be used when working with "char" datatype
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n")
    }
}