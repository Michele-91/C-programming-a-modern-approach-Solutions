/***************************************************************************
Rewrite the following function to use pointer arithmetic instead of 
array subscripting. (In other words, eliminate variables i and k and all 
uses of the [] operator.) Use a single loop instead of nested loops.

int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int i, j, sum = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < LEN; j++)
            sum += a[i][j];

    return sum;
}
***************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLS 5

int sum_two_dimensional_array(const int *a, int n);

int main(void)
{
    const int a[ROWS][COLS] = { {4, 4, 7, 1, 2},
                                {1, 0, 9, 22, 3},
                                {21, 2, 5, 10, 0}};

    printf("Sum: %d\n", sum_two_dimensional_array(a[0], ROWS * COLS));
    return 0;
}\

int sum_two_dimensional_array(const int *a, int n)
{
    int sum = 0;
    const int *p;  

    for(p = a; p <= a + n; p++)
        sum += *p;

    return sum;
}

