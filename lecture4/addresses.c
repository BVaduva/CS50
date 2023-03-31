#include <stdio.h>
#include "cs50.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *s = get_string("s: ");
    if (s == NULL)
    {
        return 1;
    }
    // malloc will ask for an amount to "reserve" memory
    char *t = malloc(strlen(s) + 1); // + 1 is needed to include the NUL character
    // This is a basic solution to prevent freezes and crashes.
    if (t == NULL)
    {
        return 1;
    }
    // input would be the "destination" then the "source"
    strcpy(t, s);

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);

    return 0;
}
