#include <stdio.h>
#include "cs50.h"
#include <string.h>
// call by reference
void set(string *a);

int main(void)
{
    string a = "full";
    printf("Your bottle is %s\n", a);
    set(&a);
    printf("Your bottle is %s\n", a);

    return 0;
}

void set(string *a)
{
    *a = "empty";
    printf("Your bottle is %s\n", *a);
}

/*
// call by value
void set(string a);

int main(void)
{
    string a = "full";
    printf("Your bottle is %s\n", a);
    set(a);
    printf("Your bottle is %s\n", a);

    return 0;
}

void set(string a)
{
    a = "empty";
    printf("Your bottle is %s\n", a);
}
*/