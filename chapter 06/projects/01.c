/****************************************************************
Write a program that finds the largest in a series of numbers
entered by the user. The program must prompt the user to enter
numbers one by one. When the user enters 0 or a negative number,
the program must display the largest nonnegative number entered:
 ****************************************************************/

#include <stdio.h>


int main()
{

   float n, n2, largest;

   printf("Enter a number: ");
   scanf("%f", &n);

   for(n2 = n ; n > 0; n = n2) {
        printf("Enter a number: ");
        scanf("%f", &n2);
        if(n2 <= 0) {
        printf("The largest number entered was %.2f\n", largest);
        }
        if (n2 > n) {
            largest = n2;
        }
    }

    return 0;
}
