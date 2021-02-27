#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int birth;
    int death;
    int count = 0;
    // TODO: Prompt for start size
    int populationStart = get_int("Please input the llama population count: ");
    if (populationStart <= 9) {
        populationStart = get_int("We need a higher number to start, try again: ");
    }

    // TODO: Prompt for end size
    int populationEnd = get_int("Please input how many additional llamas would you like there to be: ");
    if (populationEnd <= populationStart) {
        populationEnd = get_int("We want the population to increase, please choose a higher number:" );
    }
    // TODO: Calculate number of years until we reach threshold
    do {
        birth = populationStart / 3;
        death = populationStart / 4;
        populationStart = populationStart + birth - death;
        count++;
    } while (populationStart < populationEnd);
    // TODO: Print number of years
    printf("Years until population increases to required amount: %i\n", count);
}