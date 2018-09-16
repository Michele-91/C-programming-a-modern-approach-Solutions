/* Write a program that asks the user to enter a dollars-and-cents amout, then displays the amount
with 5% tax added   */

#include <stdio.h>

int main()
{
    double dollars_and_cents;
    printf("\nEnter an amount in dollars and cents: ");
    scanf("%lf", &dollars_and_cents);
    double taxed = (dollars_and_cents * 5.00) / 100.00;
    printf("tax = %f\n", taxed);
    double amount_with_tax = dollars_and_cents + taxed;
    printf("With tax added: %.2f\n\n", amount_with_tax);

    return(0);
}
