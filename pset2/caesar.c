#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // validates that only one input is added to command line
    if (argc > 2 || argc < 2)
    {
        printf("Usage: ./caesar key\n");
        return 0;
    }
    // } else
    // {
    // printf("Success!\n");
    // printf("%s\n", argv[1]);
    // }

    // ensures the value is numeric
    int key;

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isdigit(argv[1][i]))
        {
            key = atoi(argv[1]);
        } else
        {
            printf("Usage: ./caesar key\n");
            return 0;
        }
    }

    printf("%i\n", key);
    // makeCryptic(newValue);
    // return 1;

    // alters the plaintext to ciphertext
    string plaintext = get_string("plaintext: ");

    printf("ciphertext: ");
    for (int j = 0; j < strlen(plaintext); j++)
    {
        char ciphertext;;
        if (isalpha(plaintext[j]))
        {
            if (isupper(plaintext[j]))
            {
            ciphertext = (plaintext[j] - 65 + key) % 26 + 65;
            printf("%c", ciphertext);

            } else if (islower(plaintext[j]))
            {
            ciphertext = (plaintext[j] - 97 + key) % 26 + 97;
            printf("%c", ciphertext);

            }
        } else
        {
            ciphertext = plaintext[j];
            printf("%c", ciphertext);

        }
    }
    printf("\n");
}