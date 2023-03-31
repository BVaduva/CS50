#include "cs50.h"
#include <stdio.h>

int main(void)
{
    int start, end, years;

    // Prompt for start size
    do
    {
        start = get_int("Start Size: ");
    } while (start < 9);

    // Prompt for end size
    do
    {
        end = get_int("End Size: ");
    } while (end < start);

    // Calculate number of years until we reach threshold
    for (years = 0; start < end; years++)
    {
        start += start / 3 - (start / 4);
    }

    // Print number of years
    printf("Years: %i\n", years);
}