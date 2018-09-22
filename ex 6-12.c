/* Write a program that approximates e by computing the value of 1+1/1!+1/2!+1/3!+...+1/n| */

#include <stdio.h>


int main()
{
    int a, b, mcd;

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);

    while(a && b > 0) {
        mcd = a % b;
        a = b;
        b = mcd;
    }



    printf("The greatest common divisor is %d\n", a);

    return 0;
}






