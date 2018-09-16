
/* Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
that amount using the smallest number of $20, $10, $5, and $1 bills */

#include <stdio.h>

int main()
{
    /*
    int value;

    printf("Enter a dollar amount: ");
    scanf("%d", &value);
    int twenty_bills = value / 20;
    printf("$20 bills: %d\n", twenty_bills);
    int remainder1 = (value % 20);
    int ten_bills = remainder1 /  10;
    printf("$10 bills: %d\n", ten_bills);               METODO DI SVOLGIMENTO 1
    int remainder2 = remainder1 % 10;
    int five_bills = remainder2 / 5;
    printf("$5 bills: %d\n", five_bills);
    int one_bills = remainder2 / 1;
    printf("$1 bills: %d\n", one_bills);
    */

    int dollars, twenties, tens, fives;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);
    twenties = dollars / 20;
    dollars = dollars - (twenties * 20);
    tens = dollars / 10;
    dollars = dollars - (tens * 10);                        // METODO DI SVOLGIMENTO 2
    fives = dollars / 5;
    dollars = dollars - (fives * 5);
    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf(" $5 bills: %d\n", fives);
    printf(" $1 bills: %d\n", dollars);



    return(0);
}
