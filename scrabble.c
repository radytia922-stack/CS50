#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// POINTS array of 26 integers goes here!
// [EASY: Remember your alphabetical point values from 1 to 10]
int POINTS[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

// Prototype your compute_score function here
// [EASY: It takes a string and returns an int]
int compute_score(string word);

int main(void)
{
    // Step 1: Prompt Player 1 and Player 2 for their words using the CS50 library
    // [EASY]
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");
    // Step 2: Call your compute_score function for both words to get their integer scores
    // [MEDIUM]
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);
    // Step 3: Compare scores and print "Player 1 wins!", "Player 2 wins!", or "Tie!"
    // [MEDIUM]
    if (score1 > score2)
    {
        printf("Player 1 Wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 Wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

// Write your compute_score function here
// [HARD: Initialize a running score counter to zero]
int compute_score(string word)
{
    // [HARD: Loop through the length of the string character by character]
    int score = 0;

    for (int i = 0, len = strlen(word) ; i < len ;i++)
    {
        // [BOSS LEVEL: Check for uppercase letters, find their ASCII offset using 'A', and pull from POINTS]
        if (isupper(word[i]))
        {
            score += POINTS [word[i] - 'A'];
        }
        // [BOSS LEVEL: Check for lowercase letters, find their ASCII offset using 'a', and pull from POINTS]
        else if(islower(word[i]))
        {
            score += POINTS [word[i] - 'a'];
        }
    }
    // [HARD: Return the final calculated score]
    return score;
}
