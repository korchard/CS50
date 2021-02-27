#include <cs50.h>
#include <stdio.h>

void pyramid(int n);
void hash(int row);

int main(void)
{
    int height = get_int("Select pyramid height by choosing a number between 1 and 8: ");
    pyramid(height);
}

void pyramid(int n)
{
    for(int row = 0; row < n; row++)
    {
        for(int left_space = n-1-row; left_space > 0; left_space--)
        {
            printf(" ");
        }
        hash(row);
        printf(" ");
        hash(row);
        printf("\n");
    }
}

void hash(int row)
{
    for(int right = 0; right <= row; right ++)
    {
        printf("#");
    }
}