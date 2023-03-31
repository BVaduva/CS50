#include "cs50.h"
#include <stdio.h>

const int N = 3;

float average(int length, int array[]);

int main(void)
{
    // variable with N arrays in it
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        // Prompts user N amount of times for their score
        scores[i] = get_int("Score: ");
    }
    // Prints the average, but will first have to go into the function "average"
    // Function "average" takes arguments N, amount of arrays(3) from variable "scores"
    printf("Average: %f\n", average(N, scores));
}

// argument takes an array without specifying its lenght in it but as another argument

float average(int length, int array[])
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float)length;
}