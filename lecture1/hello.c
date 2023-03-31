// To run C-Code:
// 0. Make a C-File in which to write code. Here "make hello.c"
// 1. Type "make" and choose a filename without an extension to make a compiling file. Like "make hello"
//  1a. This is basically saving/compiling code and has to be done everytime you changed the code.
// 2. Type ./filename, in this case "./hello" to execute

#include "cs50.h"
#include <stdio.h> // library to help compiler translate certain functions

int main(void) // starting point similar to "greenflag" block in scratch
{
    string answer = get_string("What's your name? ");
    // printf("hello, answer\n"); this will print "hello, answer" literally
    printf("hello, %s\n", answer);
    // s% is a formating and placeholder function which calls for a string which is set after the ","
}
/* Datatypes and their print function
bool    (true or false)
char    %c(a single character)
double  %f(more precise than float)
float   %f(int with decimals)
int     %i(numbers)
long    %li(long numbers)
string  %s(text)
*/