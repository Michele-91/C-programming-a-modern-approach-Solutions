/************************************************************************
Write a program that prints the values of sizeof(int), sizeof(short),
sizeof(long), sizeof(float), sizeof(double) and sizeof(long double).
************************************************************************/

#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    printf("%d\n", (int) sizeof(int));
    printf("%d\n", (int) sizeof(short));
    printf("%d\n", (int) sizeof(long));
    printf("%d\n", (int) sizeof(float));
    printf("%d\n", (int) sizeof(double));
    printf("%d\n", (int) sizeof(long double));

    return 0;
}






