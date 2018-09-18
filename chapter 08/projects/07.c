/**************************************************************************************
Write a program that reads a 5x5 array of integers and then prints the row sums and
the column sums
**************************************************************************************/

#include <stdio.h>

#define SIZE 5

int main()
{
    int a[SIZE][SIZE];
    int i, t, row_sum = 0, col_sum = 0;

    for(i = 0; i < SIZE; i++)
    {
        printf("Enter row %d: ", i+1);
        for(t = 0; t < SIZE; t++)
        {
            scanf("%3d", &a[i][t]);
        }
    }

    printf("\nRow totals: ");
    for(i = 0; i < SIZE; i++)
    {
       for(t = 0; t < SIZE; t++)
       {
            row_sum += a[i][t];
       }
        printf("%d ", row_sum);
        row_sum = 0;
    }

    printf("\nColumn totals: ");
    for(i = 0; i < SIZE; i++)
    {
        for(t = 0; t < SIZE; t++)
        {
            col_sum += a[t][i];
        }
        printf("%d ", col_sum);
        col_sum = 0;
    }
    printf("\n");



    return 0;
}






