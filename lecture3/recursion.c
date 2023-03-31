#include "cs50.h"
#include <stdio.h>

int fab(int input);

int main(void)
{
    int fabu = get_int("Number of 3 or higher: ");
    printf("Fab # is %i\n", fab(fabu));
}

// Fibonacci rule
int fab(int input)
{
    int n = input;
    for (int i = 0; i < n; i++)
    {
        printf("%i, ", n);
    }
    printf("\n");
    {
        if (n == 1 || n == 2)
        {
            return 1;
        }
        return fab(n - 1) + fab(n - 2);
    }
}

void draw(int n);

int main(void)
{
    draw(1);
    int height = get_int("Height: ");
    draw(height);
}

/*void draw(int n)
{
    if (n <= 0)
    {
        return;
    }
    draw(n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}


void draw(int n) // Infinite Pyramide
{
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
    draw(n + 1);
}
*/