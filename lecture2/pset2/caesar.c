#include "cs50.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

bool only_digits(string input);
string rotate(string plain, int n);

int main(int argc, string argv[])
{
    // Make sure program was run with just one command-line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Make sure every character in argv[1] is a digit
    else if (only_digits(argv[1]) == false)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Convert argv[1] from a 'string' to an 'int'
    int key = atoi(argv[1]);

    // Prompt user for plaintext
    string plaintext = get_string("plaintext:  ");

    // For each character in the plaintext:
    // Algo: c[i] = (p[i] + key) % 26; (A=0, B=1 etc.) A-Z 65-90, a-z 97-122

    // Rotate the character if it's a letter
    printf("ciphertext: %s\n", rotate(plaintext, key));
}

bool only_digits(string input)
{
    bool digit = true;
    for (int i = 0; i < strlen(input); i++)
    {
        if (!isdigit(input[i]))
        {
            digit = false;
            break;
        }
    }
    return digit;
}

string rotate(string plain, int n)
{
    for (int i = 0; i < strlen(plain); i++)
    {
        // Convert indext of plain to an int (ASCII value)
        int cipher = (int)plain[i];
        if (isupper(plain[i]))
        {
            // Subtract 'A' (ASCII 65) from cipher. So 'H' is 72 which calculates 72 - 65 = 7;
            cipher = cipher - 'A';
            // Calc Caesar Cipher (7) + n (key, lets say 13) = 20 % 26 = 20;
            cipher = (cipher + n) % 26;
            // Cipher (20) + 'A' (65) = U (85);
            cipher = cipher + 'A';
            // Convert cipher back to char so it prints (and is able to return) a string.
            plain[i] = (char)cipher;
        }
        if (islower(plain[i]))
        {
            cipher = cipher - 'a';
            cipher = (cipher + n) % 26;
            cipher = cipher + 'a';
            plain[i] = (char)cipher;
        }
    }
    return plain;
}