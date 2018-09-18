/* Extend the program in Programming Project 1 (chapter 4) to handle three-digit numbers  */

#include <stdio.h>

int main()
{
    int digit_one, digit_two, digit_three;
    printf("\n\tEnter a three-digit number: ");
    scanf("%1d%1d%1d", &digit_one, &digit_two, &digit_three);

    printf("\tThe reversal is %1d%1d%.1d\n", digit_three, digit_two, digit_one);

    return 0;
}
