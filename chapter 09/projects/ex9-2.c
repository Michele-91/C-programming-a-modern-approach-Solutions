/***********************************************************************
Modify Programming Project 5 from Chapter 5 so that it uses a function
to compute the amount of income tax. When passed an amount of taxable
income, the function will return the tax due.
***********************************************************************/

#include <stdio.h>

float tax_due(int income);

int main() {

    int income;

    printf("Taxable income: ");
    scanf("%d", &income);

    printf("Taxes due are: $%.2f\n", tax_due(income));

    return 0;
}

float tax_due(int income)
{
    float tax;

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

    return tax;
}
