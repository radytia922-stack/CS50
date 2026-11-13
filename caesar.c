#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h> // You'll need this one for a specific conversion trick!
#include <string.h>

int main(int argc, string argv[])
{
    // Make sure program was run with just one command-line argument
    // [EASY] Hint: Which variable holds the total *count* of words typed in the terminal?
    // Note: The program name itself (./caesar) counts as 1!
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Make sure every character in argv[1] is a digit
    // [MEDIUM] Hint: What function from ctype.h checks if a character is a number from 0-9?
    for (int i = 0, len = strlen(argv[1]); i < len; i++)
    {
        // We use '!' to say "If this is NOT a digit..."
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Convert argv[1] from a `string` to an `int`
    // [MEDIUM] Hint: What function from stdlib.h converts an ASCII string to an integer?
    // (ASCII-to-integer)
    int key = atoi(argv[1]);

    // Prompt user for plaintext
    // [EASY] Hint: CS50's trusty function for grabbing text from the user.
    string plaintext = get_string("plaintext:  ");

    printf("ciphertext: ");

    // For each character in the plaintext:
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        // Rotate the character if it's a letter
        // [HARD] No hints! How do we check if a character is a letter in the alphabet at all?
        if (isalpha(plaintext[i]))
        {
            // [HARD] Check if it's uppercase
            if (isupper(plaintext[i]))
            {
                // [BOSS LEVEL] The Caesar formula: c = (p + k) % 26
                // How do we add the key, wrap around the alphabet using modulo, and turn it back
                // into ASCII?
                printf("%c", (plaintext[i] - 'A' + key) % 26 + 'A');
            }
            // Check if it's lowercase
            else
            {
                // [BOSS LEVEL] Same formula, but mapped for lowercase!
                printf("%c", (plaintext[i] - 'a' + key) % 26 + 'a');
            }
        }
        else
        {
            // [EASY] Hint: If it's a space or punctuation, it doesn't get encrypted. Just print it
            // exactly as it is!
            printf("%c", plaintext[i]);
        }
    }

    printf("\n");
    return 0;
}
