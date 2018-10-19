/***************************************************************************
Rewrite the following function to use pointer arithmetic instead of array
subscripting. (In other words, eliminate the variable i and all uses of 
the [] operator.) Make as few changes as possible.

void store_zeros(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        a[i] = 0;
}
***************************************************************************/

#include <stdio.h>
#include <stdbool.h>

#define N 5

void store_zeros(int a[], int n);

int main(void)
{
    int a[N] = {4, 8, 2, 4, 9};

    store_zeros(a, N);
    
    return 0;
}

void store_zeros(int a[], int n)
{
    int *p;

    for (p = a; p < a + n; p++)
        *p = 0;
}
