#include "cs50.h"
#include <stdint.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // Proper usage check
    /* It's checking if the user has entered the correct number of arguments. */
    if (argc != 2)
    {
        printf("Improper usage.");
        return 1;
    }

    // Open file
    /* It's opening the file and reading it. */
    string filename = argv[1];
    FILE *file = fopen(filename, "r");

    // Check if file exists
    if (file == NULL)
    {
        printf("No such file found.\n");
        return 1;
    }

    // "u" stands for unsigned, which says only positive
    //"int" typical integer, and 8 the size of bits
    //"_t" says it's all together one type
    // in lib <stdint.h>
    // buffer[4] says how many bytes should be stored
    uint8_t buffer[4];

    // create signature for what you are looking for
    // First 4 bytes in a text file are 104 105 32 104
    uint8_t signature[] = {104, 105, 32, 104};

    fread(buffer, 1, 4, file);

    // Does the signature match?
    for (int i = 0; i < 4; i++)
    {
        // printf("%i ", buffer[i]); to print the actual values of the first bytes
        // instead of checking all variables, it's sufficient enough to check if one is not equal to another
        if (buffer[i] != signature[i])
        {
            printf("Likely not a TXT.\n");
            fclose(file);
            return 0;
        }
    }

    printf("Likely a TXT!\n");
    // close file to save memory
    fclose(file);
    return 0;
}