/*************************************************************************************
Extend the program in Programming Project 1 (chapter 4) to handle three-digit numbers 
**************************************************************************************/

#include <stdio.h>

int main()
{
    int digit_one, digit_two, digit_three, number, number_remainder;
    printf("\n\tEnter a three-digit number: ");
    scanf("%3d", &number);

    digit_one = number / 100;
    //printf("digit_one: %d\n", digit_one);
    number_remainder = number % 100;
    digit_two = number_remainder / 10;                      //1ST METHOD (with alternative printf in comments)
    //printf("digit_two = %d\n", digit_two);
    digit_three = number_remainder % 10;
    //printf("digit_three = %d\n", digit_three);

    /*digit_one = number / 100;
    digit_two = (number / 10) % 10;   // 2ND METHOD
    digit_three = number % 10;*/

    /*printf("The reversal is %1d%1d%1d\n",                             //3RD METHOD
           number % 10, (number / 10) % 10, number / 100);*/

    printf("\tThe reversal is %1d%1d%.1d\n", digit_three, digit_two, digit_one);

    return 0;
}
