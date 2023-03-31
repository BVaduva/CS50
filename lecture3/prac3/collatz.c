#include <stdio.h>
#include "cs50.h"

int steps(int n);

int main(void)
{
    int input = get_int("Number to calculate Collatz steps: ");
    printf("It takes %i steps to get to 1\n", steps(input));
}

int steps(int n)
{
    // Static allows the variable to not be set back to 0 on new iterations.
    static int count = 0;

    if (n == 1)
    {
        return count;
    }

    else if (n % 2 == 0)
    {
        count++;
        return steps(n / 2);
    }
    else
    {
        count++;
        return steps((3 * n) + 1);
    }
}

/* OFFICIAL SOLUTION
int collatz(int n)
{
    // base case
    if (n == 1)
        return 0;
    // even numbers - return 1 + is like a hidden counter keeping track of the counting
    else if ((n % 2) == 0)
        return 1 + collatz(n/2);
    else
        return 1 + collatz(3*n + 1);
}