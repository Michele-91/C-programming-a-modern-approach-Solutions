/*****************************************************************************************************
Programming Project 8 in chapter 2 asked you to write a program that calculates the remaining balance 
on a loan afer the first, second, and third monthly payments. Modify the program so that it also asks
the user to enter the number of payments and then displays the balance remaining after each of these 
payments. 
******************************************************************************************************/

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






