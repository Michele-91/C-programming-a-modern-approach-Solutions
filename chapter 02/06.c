/**********************************************************************************
Modify the program of the Programming Project 5 so that the polynomial is evaluated
using the following formula ((((3x+2)x - 5)x - 1)x + 7)x - 6 
***********************************************************************************/

#include <stdio.h>
/* #define EQUATION_RESULT ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6 */ // possible alternative to code at line 14

int main()
{
    int x;
    printf("Enter value of x: ");
    scanf("%d", &x);
    int result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("The result of the equation ((((3x+2)x - 5)x - 1)x + 7)x - 6 is: %d\n", result);

    return(0);
}
