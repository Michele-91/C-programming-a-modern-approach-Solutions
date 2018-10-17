/***************************************************************************

***************************************************************************/

#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int numerator, denominator, reduced_numerator, reduced_denominator;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    reduce (numerator, denominator, &reduced_numerator, &reduced_denominator);

    printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);


    return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int remainder, num, denom;

    num = numerator; denom = denominator;

    while (denominator != 0) {
        remainder = numerator % denominator;
        numerator = denominator;
        denominator = remainder;

        *reduced_numerator = num / numerator;
        *reduced_denominator = denom / numerator;
    }
}
