// Check that a password has at least one lowercase, uppercase letter, number an dsymbol
// Practice iterating through a string
// Practice using the ctype library

#include "cs50.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

bool valid(string password);

int main(int argc, string argv[])
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
// More efficient AI version
{
    bool up = false, low = false, dig = false, punc = false;
    for (int i = 0; i < strlen(password); i++)
    {
        if (isupper(password[i]))
            up = true;
        if (islower(password[i]))
            low = true;
        if (isdigit(password[i]))
            dig = true;
        if (ispunct(password[i]))
            punc = true;
        if (up && low && dig && punc)
            return true;
    }
    return false;
}
/*Own version
{
    bool valid = false;
    bool up = false;
    bool low = false;
    bool dig = false;
    bool punc = false;
    for (int i = 0; i < strlen(password); i++)
    {
        if (isupper(password[i]))
        {
            up = true;
        }
        if (islower(password[i]))
        {
            low = true;
        }
        if (isdigit(password[i]))
        {
            dig = true;
        }
        if (ispunct(password[i]))
        {
            punc = true;
        }
    }
    if (up && low && dig && punc == true)
    {
        valid = true;
    }
    return valid;
}
*/