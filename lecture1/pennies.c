#include <stdio.h>
#include <math.h>
#include "cs50.h"

int main(void)
{
    // $4.20 gives back 419 pennies because of integer overflow
    float amount = get_float("Dollar amount: ");
    int pennies = round(amount * 100); // add round to round up 419
    printf("Pennies: %i\n", pennies);
}