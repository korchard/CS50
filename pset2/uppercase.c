#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");

    // for (int i = 0; s[i] != '\0'; i++)
    // int n = strlen(s);
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));

        // Another option
        // if (islower(s[i]))
        // {
        //     printf("%c", toupper(s[i]));
        // }
        // else
        // {
        //     printf("%c", s[i]);
        // }

        // Manually changing from lower to upper
        // if (s[i] >= 'a' && s[i] <= 'z')
        // {
        //     printf("%c", s[i] - 32);
        // }
        // else {
        //     printf("%c", s[i]);
        // }
    }
    printf("\n");

}