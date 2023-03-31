#include "cs50.h"
#include <stdio.h>

// The int in main automatically returned a 0 before, which tells the computer everything worked
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1; // 1 indicates that the program wasn't used properly and closes it
    }
    printf("hello, %s\n", argv[1]);
    // Here we return 0 manually. But we can check for what main returned by running the program and typing "echo $?" after it was run
    return 0;
}