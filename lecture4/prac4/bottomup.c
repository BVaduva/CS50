#include <stdio.h>

int main(void)
{
    int x = 5;
    int *ptr = x;

    // value of x
    printf("Value x: %d\n", x);

    // memory address of x using & operator
    printf("Address &x: %d\n", &x);

    // value of x using pointer variable
    printf("Pointer Var *ptr: %d\n", *ptr);

    // changing the value of x using pointer variable
    *ptr = 10;

    // printing the updated value of x
    printf("Updated x: %d\n", x);

    return 0;
}