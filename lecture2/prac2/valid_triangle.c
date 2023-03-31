/* Practice Problem
    Declare a write a function called valid_triangle that takes three real numbers representing the lengths of the three sides of a triangle
    as its arguments, and outputs either true or false, depending on whether those three lengths are capable of making a triangle.

    Note the following rules about triangles:
    A triangle may only have sides with positive length.
    The sum of the lengths of any two sides of the triangle must be greater than the length of the third side.
*/

#include "cs50.h"
#include <stdio.h>

int valid_triangle(int a, int b, int c);

int main(void)
{
    int x, y, z;
    do
    {
        x = get_int("Declare 1st triangleside length: ");
        y = get_int("Declare 2nd triangleside length: ");
        z = get_int("Declare 3rd triangleside length: ");

        if (x < 1 || y < 1 || z < 1)
        {
            printf("All numbers must be of positive value.\n");
        }
    } while (x < 1 || y < 1 || z < 1);

    int triangle = valid_triangle(x, y, z);
    if (x + y < z || x + z < y || y + z < x)
    {
        printf("The combined value of 2 sides has to be higher than the 3rd side.\n");
    }
    else
    {
        printf("%i\n", triangle);
    }
}

int valid_triangle(int a, int b, int c)
{
    int sum = a + b + c;
    return sum;
}

/* OFFICIAL VERSION
bool valid_triangle(float x, float y, float z);

bool valid_triangle(float x, float y, float z)
{
    // check for all positive sides
    if (x <= 0 || y <= 0 || z <= 0)
    {
        return false;
    }

    // check that sum of any two sides greater than third
    if ((x + y <= z) || (x + z <= y) || (y + z <= x))
    {
        return false;
    }

    // if we passed both tests, we're good!
    return true;
}
*/