/*************************************************************************** 
Write a program that computes the factorial of a positive number:

   Enter a positive integer: 6
   Factorial of 6: 720
   
(a) Use a short variable to store the value of the factorial. What is
the largest value of n for which the program correctly prints the
factorial of n?
(b) Repeat part (a), using an int variable instead.
(c) Repeat part (a), using an long variable instead.
(d) Repeat part (a), using an long long variable instead.
(e) Repeat part (a), using an float variable instead.
(f) Repeat part (a), using an double variable instead.
(g) Repeat part (a), using an long double variable instead.

In cases (e)-(g), the program will display a close approximation of the
factorial, not necessarily the exact value.
***************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main() 
{
    
    int n, i;
    double factorial;
    factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("Factorial: %lf\n", factorial);

    return 0;
}






