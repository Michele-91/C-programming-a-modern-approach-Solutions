/***************************************************************************
Write the following function:
int *find_largest(int a[], int n);

When passed an array of length n, the function will return a pointer to the
array's largest element.
***************************************************************************/

#include <stdio.h>

#define N 5

void *find_largest(int a[], int n);

int main(void)
{
    int b[N], i, *largest;

    printf("Enter %d numbers: ", N);
    for(i = 0; i < N; i++)
        scanf(" %d", &b[i]);

    largest = find_largest(b, N);
    printf("Largest number: %d\n", *largest);

    return 0;
}

void *find_largest(int a[], int n)
{
    int i, *largest;

    largest = &a[0];
    for(i = 1; i < n; i++)
    {
        if (a[i] > *largest)
            largest = &a[i];
    }

    return largest;

    /*
    int i, index_largest = 0;

    for (i = 0; i < n; i++) {
        if (a[i] > a[index_largest])            //ALTERNATIVE METHOD
            index_largest = i;
    }

    return &a[index_largest];
    */
}
