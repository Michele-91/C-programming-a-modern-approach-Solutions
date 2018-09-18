/***************************************************************************************************************
Write a program that asks the user to enter a two-digit number, then prints the number with its digits reversed.  
****************************************************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    int digit_one, digit_two, number;
    printf("Enter a two-digit number: ");
    scanf("%2d", &number);

    digit_one = number / 10;
    digit_two = number % 10;

    printf("The reversal is %1d%1d\n", digit_two, digit_one);

    return 0;
}
