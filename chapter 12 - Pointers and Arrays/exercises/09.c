/***************************************************************************
Write the following function:
double inner_product(const double *a, const double *b, int n);

a and b both point to arrays of length n. The function should return 
a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1]. 
Use pointer arithmetic--not subscripting--to visit array elements.
***************************************************************************/

#include <stdio.h>
#include <stdbool.h>

#define N 5

double inner_product(const double *a, const double *b, int n);

int main(void)
{
    double a[N];
    double b[N];
    double *p;

    printf("\nEnter %d values for array #1: ", N);
    for(p = a; p < a + N; p++)
        scanf(" %lf", p);

    printf("\nEnter %d values for array #2: ", N);
    for(p = b; p < b + N; p++)
        scanf(" %lf", p);

    printf("Product of the two arrays: %lf\n", inner_product(a, b, N));

}

double inner_product(const double *a, const double *b, int n)
{
    const double *p1, *p2;
    double sum = 0;

    for (p1 = a, p2 = b; p1 < a + n && p2 < b + N; p1++, p2++)
        sum += (*p1 * *p2);

    return sum;
}
