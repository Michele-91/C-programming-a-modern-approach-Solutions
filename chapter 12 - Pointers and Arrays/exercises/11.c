/***************************************************************************
Modify the find_largest function so that it uses pointer arithmetic
--not subscripting--to visit array elements.
***************************************************************************/

#include <stdio.h>

#define N 5

int find_largest(int a[], int n);

int main(void)
{
    int a[N];
    int *p;

    printf("\nEnter %d values: ", N);
    for(p = a; p < a + N; p++)
        scanf(" %d", p);

    printf("Largest number: %d\n", find_largest(a, N));
}

int find_largest(int a[], int n)
{
    int *p, max = 0;

    for(p = a; p < a + n; p++)
    {
        if(*p > max)
            max = *p;
    }

    /*
    max = a[0];
    for (p = a + 1; p < a + n; p++)                 ALTERNATIVE METHOD
        if (*p > max)
            max = *p;
    */

    /*
    int *p, *max;

    for (p = a, max = a; p < a + n; p++) {            ALERNATIVE METHOD 2
        if (*p > *max)
            max = p;
    */

    return max;
}
