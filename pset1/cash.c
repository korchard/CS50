#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(void)
{
    float change = get_float("How much change do I owe you? ");

    // conditionals to ask for re-entry if not a float or int
    // if (isalpha(change) || isspace(change))
    //     change = get_float("Make sure you enter a number please: ");
    // }

    while (change <= 0)
    {
        change = get_float("Please re-enter a positive number: ");
    }

    printf("%f\n", change);

    // multiply float to penny amount and round to nearest int
    change = round(change *= 100);

    printf("%f\n", change);

    // count least amount of coins it takes
    int count = 0;

    do
    {
        change = change - 25;
        count++;
    }
    while (change >= 25);

    if (change >= 10) {
        do
        {
            change = change - 10;
            count++;
        }
        while (change >= 10);
    }

    if (change >= 5) {
    do
    {
        change = change - 5;
        count++;
    }
    while (change >= 5);
    }

    if (change >= 1) {
    do
    {
        change = change - 1;
        count++;
    }
    while (change >= 1);
    }

    printf("%i coins\n", count);
}