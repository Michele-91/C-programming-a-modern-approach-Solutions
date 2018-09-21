/****************************************************************************************************
In one state, single residents are subject to the following income tax: 
Income               Amount of tax
Not over $750        1% of income
$750-$2,250          $7.50      plus 2% of amount over $750
$2,250-3,750         $37.50     plus 3% of amount over $2,250
$3,750-5,250         $82.50     plus 4% of amount over $3,750
$5,250-$7,000        $142.50    plus 5% of amount over $5,250
Over $7,000          $230.00    plus 6% of amount over $7,000
Write a program that asks the user to enter the amount of taxable income, then displays the tax due.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {

    int income;
    float tax;

    printf("Taxable income: ");
    scanf("%d", &income);

    if (income <= 750) {
        tax = income * .01f;
    } else if (income <= 2250) {
        tax = 7.50 + (income * .02f);
    } else if (income <= 3750) {
        tax = 37.50 + (income * 0.03f);
    } else if (income <= 5250) {
        tax = 82.50 + (income * 0.04f);
    } else if (income <= 7000) {
        tax = 142.50 + (income * 0.05f);
    } else if (income > 7000) {
        tax = 230.00 + (income * 0.06f);
    }

    printf("Taxes due are: $%.2f\n", tax);


    return 0;
}
