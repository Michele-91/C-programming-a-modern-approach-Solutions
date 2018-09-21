/* Write a program that asks the user to enter a wind speed (in knots), then displays the corresponding
 * description.*/

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
