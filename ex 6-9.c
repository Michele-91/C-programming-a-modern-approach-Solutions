/* Write a program that prints a one-month calendar. The user specifies the number of days in the month
 * and the day of the week on which month begins */

#include <stdio.h>


int main()
{

    float loan, interest, monthly_payment, number_of_payments, i;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);\
    printf("Number of payments: ");
    scanf("%f", &number_of_payments);\
    interest = interest * 0.01f / 12;

    for(i = 1; i < number_of_payments; i++ ) {
        loan = (loan - monthly_payment) + (loan * interest);
        printf("Balance remaining after %.0f payment(s) %.2f\n", i, loan);
    }

    return 0;
}






