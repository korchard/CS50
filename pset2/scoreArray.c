#include <cs50.h>
#include <stdio.h>

const int TOTAL = 3;
float average(int length, int array[]);

int main(void)
{
    // when declaring array - brackets is total number of elements/values
    // int score[3];

    // refers to the position in the array
    // scores[0] = get_int("Scores: ");
    // scores[1] = get_int("Scores: ");
    // scores[2] = get_int("Scores: ");

    // int total = get_int("Total number of scores: ");

    int scores[TOTAL];

    for (int i = 0; i < TOTAL; i++) {
        scores[i] = get_int("Scores: ");
    }

    printf("Average: %f\n", average(TOTAL, scores));
}

float average(int length, int array[])
{
    int sum = 0;

    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return (float) sum / length;
}