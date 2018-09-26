/**************************************************************************
Write a program that evaluates an expression:

Enter an expression: 1+2.5*3
Value of expression: 10.5

The operands in the expression are floating-point numbers; the operators
are +, -, *, and /. The expression is evaluated from left to right (no
operator takes precedence over any other operator).
**************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main()
{
    double n = 0.0;
    double total = 0.0;
    char ch;

    printf("Enter an expression: ");
    scanf("%lf", &total);
    while((ch = getchar()) != '\n')
    {
        switch(ch)
        {
            case '+':
            scanf("%lf", &n);
            total += n; break;
            case '-':
            scanf("%lf", &n);
            total -= n; break;
            case '*':
            scanf("%lf", &n);
            total *= n; break;
            case '/':
            scanf("%lf", &n);
            total /= n; break;
        }

    }

    printf("Value of expression: %.2f\n", total);
    
    return 0;
}






