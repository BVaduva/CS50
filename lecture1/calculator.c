/*
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("%i\n", x + y);
}
Program is fine, but "int" only supports up to 2bil. So +/- 1bil.
To fix this, use "long" instead and adjust get.and print function %li
*/

#include "cs50.h"
#include <stdio.h>

int main(void)
{
    // after a certain amount of decimals, floating-point-inprecisions occur which are not 100% correct numbers
    // so 4 / 3 ouputs 1.33333337306976318359375000000000000000000000000000
    // integer overflow goes back to bits. 3 bits can only count to 7. Without an 8th, you can't count further
    int x = get_int("x: ");
    int y = get_int("y: ");
    // Divide x by y
    // int inputs get converted to floats. Converting one should be sufficient enough
    float z = (float)x / (float)y;
    // 50 decimals: int will throw away all decimals, so float is needed
    printf("%.50f\n", z);
}