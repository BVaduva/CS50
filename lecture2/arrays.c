#include <stdio.h>
#include "cs50.h"

// two set declarations for variables
void set_array(int array[4]);
void set_int(int x);

int main(void)
{
    // set in main void
    int a = 10;
    int b[4] = {0, 1, 2, 3};
    // called for from outside
    set_int(a);
    set_array(b);
    printf("%d %d\n", a, b[0]);
}

void set_array(int array[4])
{
    array[0] = 22;
}

void set_int(int x)
{
    x = 22;
}