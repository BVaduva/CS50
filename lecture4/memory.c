#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Allocate memory for an array of 3 ints and stores the memory address of an int
    int *x = malloc(3 * sizeof(int));
    if (x == NULL)
    {
        return 1;
    }
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;
    // Free up the memory slot(s) that x had.
    free(x);
}