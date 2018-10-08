/***********************************************************************
Write a function that computes the value of the following polynomial:
3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
Write a program that asks the user to enter a value for x, calls the
function to compute the value of the polynomial, and then displays 
the value returned by the function.
***********************************************************************/

#include <stdio.h>

int result(int x);

int main(void)
{ 

    int x;
    printf("Given the polynomial:\n3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("Enter a value for x to solve the equation: ");
    scanf("%d", &x);

    printf("The result is: %d\n\n", result(x));

    return 0;
}

int result(int x)
{
    int p_five, p_four, p_three, p_two, p_one, result;
    p_five = 3 * (x * x * x * x * x);
    p_four = 2 * (x * x * x * x);
    p_three = 5 * (x * x * x);
    p_two = 1 * (x * x);
    p_one = 7 * x;
    result = p_five + p_four - p_three - p_two + p_one - 6;

    /*
    int i, result = 0;
    for(i = 5; i >= 0; i--)
    {
        switch(i)
        {
            case 5: result += (3 * (x * x * x * x * x)); break;
            case 4: result += (2 * (x * x * x * x)); break;
            case 3: result -= (5 * (x * x * x)); break;
            case 2: result -= (x * x); break;                             //ALTERNATIVE METHOD
            case 1: result += (7 * x); break;                       
            case 0: result -= 6; break;                                
            default: break;
        }
    }*/

    return result;
}
