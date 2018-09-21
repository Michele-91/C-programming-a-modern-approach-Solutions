/*************************************************************************************
Write a program that calculates how many digits a number contains.
You may assume that the number has no more than four digits. Hint: use if statements. 
**************************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 0 && number <= 9) {
        printf("The number %d has one digit\n", number);
    } else if (number >= 10 && number <= 99) {
        printf("The number %d has two digits\n", number);
    } else if (number >= 100 && number <= 999) {
        printf("The number %d has three digits\n", number);
    } else if (number >= 1000 && number <= 9999) {
        printf("The number %d has four digits\n", number);
    } else {
        printf("Error: %d is an invalid number\n", number);
    }





    return 0;
}
