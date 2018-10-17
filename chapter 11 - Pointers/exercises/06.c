/***********************************************************************************
Write the following function:

void find_two_largest(int a[], int n, int *largest,
                      int *second_largest);
 
When passed an array a of length n, the function will search a for its largest and 
second largest elements, storing them in the variables pointed to by largest and 
second_largest, respectively.
************************************************************************************/

#include <stdio.h>

#define N 5

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
    int b[N], i, Largest, Second_largest;

    printf("\nEnter %d numbers: ", N);
    for(i = 0; i < N; i++)
        scanf(" %d", &b[i]);

    find_two_largest(b, N, &Largest, &Second_largest);
    printf("Largest: %d\nSecond Largest: %d\n", Largest, Second_largest);
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    int i;

    *largest = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] > *largest)
        {
            *second_largest = *largest;
            *largest = a[i];
        }

    }
}
