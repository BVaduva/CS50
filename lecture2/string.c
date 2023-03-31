#include "cs50.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input:  ");
    printf("Output: ");
    // Moral of this code is that a question is asked repeatedly (calling (s) of strlen) for which the answer is still the same after the first time.
    // for (int i = 0; i < strlen(s); i++)
    // More elegant variation: 2 functions are set in the for loop
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}