// #include <cs50.h>
// #include <stdio.h>

// void length(long int n);
// void valid(long int n);
// void type(long int n);

// int main(void)
// {
//     long int cc = get_long("Please input your card digits: ");
//     // length(long int n);
//     // valid(long int n);
//     // type(long int n);

//     // figures out the length of the array
//     int count = 0;
//     long int leng = cc;
//     while(leng != 0)
//     {
//         leng = leng / 10;
//         count++;
//     }
//     if (count != 13 && count != 15 && count != 16)
//     {
//         printf("INVALID\n");
//         return 0;
//     }
//     else
//     {
//         printf("%ld\n", cc);
//     }

//     int sum1 = 0;
//     int sum2 = 0;
//     long int valid = cc;
//     int mod1;
//     int mod2;
//     int digit1;
//     int digit2;
//     int total = 0;

//     // removes last digit and adds it to sum1
//     mod1 = valid % 10;
//     valid = valid / 10;
//     sum1 = sum1 + mod1;

//     // removes second to last digit and adds to sum2
//     mod2 = valid % 10;
//     valid = valid / 10;
//     sum2 = sum2 + mod2;

//     printf("%i %i\n", sum1, mod1);
//     printf("%i %i\n", sum2, mod2);

//     mod2 = mod2 * 2;
//     digit1 = mod2 % 10;
//     digit2 = mod2 / 10;
//     sum2 = sum2 + digit1 + digit2;

//     while (valid > 0);
//     total = sum1 + sum2;

//     // Check Luhn Algorithm
//     if (total % 10 != 0)
//     {
//         printf("INVALID\n");
//     }
//     else
//     {
//         printf("%i %i\n", sum2, mod2);
//     }
// }

// figures out the length of the array
// void length(long int n)
// {
//     int count = 0;
    // long int leng = cc;
    // while(leng != 0)
    // {
    //     leng = leng / 10;
    //     count++;
    // }
    // if (count != 13 && count != 15 && count != 16)
    // {
    //     printf("INVALID\n");
    //     return 0;
    // }
    // else
    // {
    //     printf("%ld\n", cc);
    // }
// }

// void valid(long int n)
// {
//     // Calculate checksum
//     int sum1 = 0;
//     int sum2 = 0;
//     long x = n;
//     int total = 0;
//     int mod1;
//     int mod2;
//     int d1;
//     int d2;
//     do
//     {
//         // Remove last digit and add to sum1
//         mod1 = x % 10;
//         x = x / 10;
//         sum1 = sum1 + mod1;
//         // Remove second last digit
//         mod2 = x % 10;
//         x = x / 10;
//         // Double second last digit and add digits to sum2
//         mod2 = mod2 * 2;
//         d1 = mod2 % 10;
//         d2 = mod2 / 10;
//         sum2 = sum2 + d1 + d2;
//     }
//     while (x > 0);
//     total = sum1 + sum2;

//     // Next check Luhn Algorithm
//     if (total % 10 != 0)
//     {
//         printf("INVALID\n");
//     }
// }

// void type(long int n)
// {
//     // Get starting digits
//     long start = n;
//     do
//     {
//         start = start / 10;
//     }
//     while (start > 100);

//     // Next check starting digits for card type
//     if ((start / 10 == 5) && (0 < start % 10 && start % 10 < 6))
//     {
//         printf("MASTERCARD\n");
//     }
//      else if ((start / 10 == 3) && (start % 10 == 4 || start % 10 == 7))
//     {
//         printf("AMEX\n");
//     }
//     else if (start / 10 == 4)
//     {
//         printf("VISA\n");
//     }
//     else
//     {
//         printf("INVALID\n");
//     }
// }

#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Declare and initialize a variable and ask for user input.
    // long long cardnumber = 0;

    // Ask for credit card number
    long long cardnumber = get_long("Please input your card digits: ");
    // do
    // {printf("What is your card number? ");
    // cardnumber = GetLongLong();
    // }
    while (cardnumber < 0);

    // Determine whether it has a valid number of digits
    int count = 0;
    long long digits = cardnumber;
    while (digits > 0)
    {
        digits = digits/10;
        count++;
    }
    if ((count != 13) && (count != 15) && (count != 16))
    {
        printf("INVALID\n");
    }

    // determine whether the card is valid
    int number[count];

    for (int i = 0; i < count; i++)
    {
        number[i] = cardnumber % 10;
        cardnumber = cardnumber / 10;
    }

    int originalnumber[count];
    for (int i = 1; i < count; i++)
    {
        originalnumber[i] = number[i];
    }

    for (int i = 1; i < count; i+=2)
    {
        number[i] = number[i] * 2;
    }

    // figure out which kind of card it is
    int v = 0;
    int temp;

    if (count == 13)
    {
      for (int i = 0; i < count; i++)
      {
        temp = (number[i] % 10) + (number[i]/10 % 10);
        v = v + temp;
      }
      if (originalnumber[12] == 4 && v % 10 == 0)
      {
        printf("VISA\n");
      }
      else
      {
        printf("INVALID\n");
      }
    }
    if (count == 15)
    {
      for (int i = 0; i < count; i++)
      {
        temp = (number[i] % 10) + (number[i]/10 % 10);
        v = v + temp;
      }
      if (originalnumber[14] == 3 && v % 10 == 0 && (originalnumber[13] == 4 || originalnumber[13] == 7))
      {
        printf("AMEX\n");
      }
      else
      {
        printf("INVALID\n");
      }
    }
    if (count == 16)
    {
      for (int i = 0; i < count; i++)
      {
        temp = (number[i] % 10) + (number[i]/10 % 10);
        v = v + temp;
      }
      if (originalnumber[15] == 4 && v % 10 == 0)
      {
        printf("VISA\n");
      }
      else if (originalnumber[15] == 5 && v % 10 == 0 && (originalnumber[14] == 1 || originalnumber[14] == 2 || originalnumber[14] == 3 || originalnumber[14] == 4 || originalnumber[14] == 5))
        {
            printf("MASTERCARD\n");
        }
      else
      {
        printf("INVALID\n");
      }
    }

    return 0;
}
