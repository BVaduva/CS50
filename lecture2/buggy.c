#include "cs50.h"
#include <stdio.h>

int get_negative_int(void);

int main(void)
{
    int i = get_negative_int();
    printf("%i\n", i);
}

// Very simple example for debugging test purposes. Asking user for a negativ value but works vice versa (not prompting user again when not negativ)
int get_negative_int(void)
{
    //
    int n;
    do
    {
        n = get_int("Negative Integer: ");
    } while (n < 0);
    return n;
}
