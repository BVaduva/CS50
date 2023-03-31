#include "cs50.h"
#include <stdio.h>

/*int main(void)
{
    // Const adds a condition to a variable to make it constant and not accidentally change the values
    const int n;
    // do loop checks for something last contrary to a while loop which does it first
    do
    {
        n = get_int("Width: ");
    }
    while (n < 1);

    for (int i = 0; i < n; i++)
    {
        printf("?");
    }
    printf("\n");
}
*/

int main(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    } while (n < 1);
    // For each row
    for (int i = 0; i < n; i++)
    {
        // For each column
        for (int j = 0; j < n; j++)
        {
            // Print a brick
            printf("#");
        }

        // Move to next row
        printf("\n");
    }
}

// Const adds a condition to a variable not allowing it to be changed
const int n = 5;

// void before a function means it's not returning a value. It will only do something with an input. In this case:
// "no return value" "function name" "(input type nameof variable)"
void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}