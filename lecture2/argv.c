#include "cs50.h"
#include <stdio.h>

// This requires the user to give a prompt after run command like ./argv David
int main(int argc, string argv[])
{
    // Restricts the user from inputting to much. Only allows 1 word after ./argv, because that is already the first input
    if (argc == 2)
    {
        // This will print the x position of the array argv. Putting 0 into the bracket returns the programs name. So ask for the 2nd position [1]
        printf("hello, %s\n", argv[1]); // %s %s\n, argv[1], argv[2] also possible, but needs adjustment in argc == x above
    }
    else
    {
        printf("hello, world\n");
    }
}