/**********************************************************************
The following function supposedly computers the sum and average of 
the numbers in the array a, which has length n, avg and sum point to 
variables that the functions should modify. Unfortunately, the 
function contains several errors; find and correct them.

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;

    sum = 0.0;
    for (i = 0; i < n; i++)
        sum += a[i];
    avg = sum / n;
}
************************************************************************/

#include <stdio.h>
#include <stdbool.h>

#define N 5

void avg_sum(double a[], int n, double *avg, double *sum);

int main(void)
{
    double b[N], Avg, Sum;
    int i;

    printf("\nEnter %d numbers: ", N);
    for(i = 0; i < N; i++)
    {
        scanf(" %lf", &b[i]);
    }
    avg_sum(b, N, &Avg, &Sum);

    printf("Average: %.2lf\nSum: %.2lf\n", Avg, Sum);
}

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;

    *sum = 0.0;
    for(i = 0; i < n; i++)
        *sum += a[i];
    *avg = *sum / n;
}
