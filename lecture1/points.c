#include "cs50.h"
#include <stdio.h>

int main(void)
{
    const int MINE = 2; // use "const" if value never changes and CAPITALIZE for visual indication
    int points = get_int("How many points did you lose? ");

    if (points < MINE)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > MINE)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("We lost the same amount of points.\n");
    }
}