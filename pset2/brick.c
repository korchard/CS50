#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // strings use double quotes, char uses single quotes
    // char c = '#';
    // char c1 = 'H';
    // char c2 = 'I';
    // char c3 = '!';

    // printf("%i %i %i \n", c1, c2, c3);

    string s = "HI!";

    printf("%i %i %i %i %i\n", s[0], s[1], s[2], s[3], s[40]);
}