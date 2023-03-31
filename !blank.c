#include "cs50.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// Pointer Prediciton Exercise
int main(void)
{
    FILE *file = fopen("hi.txt", "a");

    string name = get_string("Name: ");
    string number = get_string("Number: ");

    fprintf(file, "%s, %s\n", name, number);

    fclose(file);
}
