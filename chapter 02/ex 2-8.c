
/* Write a program that calculates the remaining balance on a loan after the first, second, and third
monthly payments */

#include <stdio.h>

int main()
{
    float loan, interest, monthly_payment;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);\
    interest = interest * 0.01f / 12;
    loan = (loan - monthly_payment) + (loan * interest);
    printf("Balance remaining after first payment %.2f\n", loan);
    loan = (loan - monthly_payment) + (loan * interest);
    printf("Balance remaining after second payment %.2f\n", loan);
    loan = (loan - monthly_payment) + (loan * interest);
    printf("Balance remaining after third payment %.2f\n", loan);



    return(0);
}
