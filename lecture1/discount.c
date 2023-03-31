#include "cs50.h"
#include <stdio.h>

float discount(float price); // int percentage argument is necessary for the program to run

int main(void)
{
    float regular = get_float("Regular Price: ");
    int percent_off = get_int("Percent Off: ");
    // Gets to inputs from user and handle them in function
    // sale takes the whole code from discount and prints it below
    float sale = discount(regular, percent_off);
    //%.2f indicates 2 decimal points
    printf("Sale Price: %.2f\n", sale);
}
// Above inputs are registered first and then used for the math below
float discount(float price, int percentage)
{
    return price * (100 - percentage) / 100;
}