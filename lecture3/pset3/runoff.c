#include "cs50.h"
#include <stdio.h>
#include <strings.h>
#include <string.h>

// Exact same code as online, but does not print winner?
// Max voters and candidates
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

// preferences[i][j] is jth preference or voter i
int preferences[MAX_VOTERS][MAX_CANDIDATES];

// Candidates have name, vote count, eliminated status
typedef struct
{
    string name;
    int votes;
    bool eliminated;
} candidate;

// Array of cnadidates
candidate candidates[MAX_CANDIDATES];

// Numbers of voters and candidates
int voter_count;
int candidate_count;

// Function prototypes
bool vote(int voter, int rank, string name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX_CANDIDATES)
    {
        printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }

    voter_count = get_int("Number of voters: ");
    if (voter_count > MAX_VOTERS)
    {
        printf("Maximum number of voters is %i\n", MAX_VOTERS);
        return 3;
    }

    // Keep querying for voters
    for (int i = 0; i < voter_count; i++)
    {

        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            // Record vote, unless it's invalid
            if (!vote(i, j, name))
            {
                printf("Invalid vote.\n");
                return 4;
            }
        }

        printf("\n");
    }

    // Keep holding runoffs until winner exists
    while (true)
    {
        // Calculate votes given remaining candidates
        tabulate();

        // Check if electionhas been won
        bool won = print_winner();
        if (won)
        {
            break;
        }

        // Eliminate last-place candidates
        int min = find_min();
        bool tie = is_tie(min);

        // If tie, everyone wins
        if (tie)
        {
            for (int i = 0; i < candidate_count; i++)
            {
                if (!candidates[i].eliminated)
                {
                    printf("%s\n", candidates[i].name);
                }
            }
            break;
        }

        // Eliminate anyone with minimum number of votes
        eliminate(min);

        // Reset vote counts back to zero
        for (int i = 0; i < candidate_count; i++)
        {
            candidates[i].votes = 0;
        }
    }
    return 0;
}

// Record preference if vote is valid
bool vote(int voter, int rank, string name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcasecmp(name, candidates[i].name) == 0)
        {
            // Assign 0, 1, 2 etc. into slot [voter][rank]
            preferences[voter][rank] = i;
            return true;
        }
    }
    return false;
}

// Tabulate votes for non-eliminated candidates
void tabulate(void)
{
    // # of voter/ballot
    for (int i = 0; i < voter_count; i++)
    {
        // Set counter for top voter choice for current ballot
        int top = 0;
        for (int j = 0; j < candidate_count; j++)
        {
            // Check if value of int j is the same as the one stored in [i][top]
            if (candidates[j].eliminated == false && j == preferences[i][top])
            {
                candidates[j].votes++;
                break;
            }
            // If candidate is eliminated and the top choice of current ballot
            else if (candidates[j].eliminated && preferences[i][top])
            {
                // Remove eliminated candidate from top choice of ballot
                top++;
                // Reset candidate index to start with first candidate again
                j = -1;
                continue;
            }
        }
    }
    return;
}

// Print the winner of the election, if there is one
bool print_winner(void)
{
    int winner = 0;
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > winner)
        {
            winner = candidates[i].votes;
        }
    }
    for (int j = 0; j < candidate_count; j++)
    {
        if (candidates[j].votes == winner && winner > (voter_count / 2))
        {
            printf("Winner: %s\n", candidates[j].name);
            return true;
        }
    }
    return false;
}

// Return the minimum number of votes any remaining candidate has
int find_min(void)
{
    int lowest = voter_count;
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].eliminated == false)
        {
            if (candidates[i].votes < lowest)
            {
                lowest = candidates[i].votes;
            }
        }
        else
        {
            continue;
        }
    }
    return lowest;
}

// Return true if the eleection is tied between all candidates, false otherwise
bool is_tie(int min)
{
    int votes = 0;
    // Counter to increments by 1 if someone is eliminated.
    int new_can_count = 0;

    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes == min && candidates[i].eliminated == false)
        {
            votes++;
        }
        if (candidates[i].eliminated)
        {
            new_can_count++;
        }
    }
    // It's like a condition. If the statement after ´return´ is true, it's like there was a ´true´
    // Has to be candidate_count - new_can_count, because if no one is eliminated, candidate_count is still true
    return votes == candidate_count - new_can_count;
}

// Eliminate the candidate (or cadidates) in last place
void eliminate(int min)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes = min)
        {
            candidates[i].eliminated = true;
        }
    }
    return;
}