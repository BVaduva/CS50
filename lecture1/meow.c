#include <stdio.h>

//"meow" function can be put anywhere BUT ONLY IF it was mentioned prior to main.
// void meow(int n);
// void meow(void) // return type(void)+ meow(function)+(input/argument)can be left empty but "void" says explicitly no
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}

int main(void)
{
    meow(5);
}

/*int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("meow\n");
    }
}
*/