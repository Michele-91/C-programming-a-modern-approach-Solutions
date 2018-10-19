/***************************************************************************
Modify the find_middle function of section 11.5 so that it uses
pointer arithmetic to calculate the return value.
***************************************************************************/

#include <stdio.h>

#define N 5

int *find_middle(int a[], int n);

int main(void)
{
    int a[N];
    int *p;

    printf("\nEnter %d values: ", N);
    for(p = a; p < a + N; p++)
        scanf(" %d", p);

    printf("Middle element of array: %d\n", *find_middle(a, N));

}

int *find_middle(int a[], int n)
{
    return a + (N / 2);
}
