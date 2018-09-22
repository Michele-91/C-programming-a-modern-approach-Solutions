/* Write a program that approximates e by computing the value of 1+1/1!+1/2!+1/3!+...+1/n| */

#include <stdio.h>


int main()
{

    int i, n, denom;
    float e;

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (i = 1, e = 1.0f, denom = 1; i <= n; i++) {
        e += 1.0f / (denom *= i);
    }

    printf("Approximation of e: %f\n", e);


    return 0;
}






