/*
TO COMPILE
f6 key (only without cs50.c lib)
or
gcc -o {filename} {filename.filetype(like"c")} cs50.c (only needed if this lib is needed)
./{filename} to run
*/
#include <stdio.h>
#include "cs50.h"

int main(void)
{
    // Set"height as int, request height from user and reapeat if under 1 or over 8 or non-numeric
    int height;
    do
    {
        height = get_int("Height: ");
    } while (height < 1 || height < 8);
    // Part of the actual pyramid
    // For each row (->) i starts 0, if i < height, execute next for loop, after next for loop increment i by 1
    // for(initialize; condition; update)
    for (int i = 0; i < height; i++)
    {
        // For each column(_v) ^code starts when i < height
        for (int j = 0; j < height; j++)
        {
            if (i >= j)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}