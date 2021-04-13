#include <stdio.h>
#include <cs50.h>

bool triangle(float a, float b, float c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return false;
        printf("false");
    }
    if ((a + b) <= c || (b + c) <= a || (c + a) <= b)
    {
        return true;
        printf("false");
    } else
    {
        return false;
        printf("true");
    }
}