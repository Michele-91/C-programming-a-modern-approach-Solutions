/************************************************************************************ 
Write a program that asks the user to enter a value for x and then display the value
of the following polynomial: 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6  
*************************************************************************************/

#include <stdio.h>

int main()
{
    int x;
    printf("Enter x value: ");
    scanf("%d", &x);

    int xTimestwo = x * x;
    int xTimesthree = xTimestwo * x;
    int xTimesfour = xTimesthree * x;
    int xTimesfive = xTimesfour * x;
    int equation = (3 * xTimesfive) + (2 * xTimesfour) -
    (5 * xTimesthree) - (xTimestwo) +(7 * x) - (6);
    printf("Result of the equation 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6: %d\n\n", equation);

    return(0);
}
