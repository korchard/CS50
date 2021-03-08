#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        // Prints first word only
        // printf("hello, %s\n", argv[1]);

        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            printf("%c\n", argv[1][i]);
        }
    }
    else
    {
        printf("hello world!\n");
    }
}