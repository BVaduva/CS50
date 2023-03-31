#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("n: ");

    if (n % 2 == 0) // n gets input of user, % is the remainder of 2 here, == means equals to
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}