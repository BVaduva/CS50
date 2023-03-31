#include <stdio.h>
#include "cs50.h"

int main(void)
{
    // Finally, we use a for loop to get rid of repititon and ask the user for the number of scores to get rid of hard coded amount

    int sum = 0;
    int n = get_int("How many scores? ");

    int scores[n];

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
    }

    for (int i = 0; i < n; i++)
    {
        sum += scores[i];
    }

    // Lastly, we have to change the printf statement to combine and divide the specific values
    printf("Average: %d\n", sum / n);
}

/*
int score1 = 72;
int score2 = 73;
int score3 = 33;

    // if divided by 3, it returnes back 0 or error
    // "format specifies type "double" but the argument has type "int"
    // turning the divider from int (3) to float (3.0), fixes the issue as it promotes integers to float. It's enough if one value is float.
    // Still from a program perspective it's bad design because scores and amount divided are hard coded.

printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
*/

/*
    // working with arrays, still doesn't solve the problem of hard coding and long code

int scores[3];
// to solve hard coding, we can ask the user for input for their scores

scores[0] = 72; -> get_int("Score: ");
scores[1] = 73; -> get_int("Score: ");
scores[2] = 33; -> get_int("Score: ");

// Code gives "code smell". Basically to much copy/paste

printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
*/