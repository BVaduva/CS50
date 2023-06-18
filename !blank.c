#include "cs50.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int *create_array(int size)
{
    int *arr = (int *)malloc(size* sizeof(int));
    return arr;
}

int main(void)
{
int x = 42;     // Declare an integer variable and assign a value
int *p = &x;    // Declare a pointer to an integer and assign the address of x
printf("%d\n", x); // Prints 42
printf("%d\n", *p); // Prints 42
}
