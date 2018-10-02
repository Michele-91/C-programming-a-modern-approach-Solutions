/****************************************************************************************
Write a program that prints an n x n magic square (a square arrangement of the numbers
1, 2, ..., n^2 in which the sums of the rows, columns, and diagonals are all the same).
The user will specify the value of n.
Store the magic square in a two-dimensional array. Start by placing the number 1 in the
middle of row 0. Place each of the remaining number 2, 3, ..., n^2 by moving up one row
and over one column. Any attempt to go outside the bounds of the array should "wrap
around" to the opposite side of the array. For example, instead of storing the next
number in row-1, we would store it in row n-1(the last row). Instead of storing the next
number in column n, we would store it in column 0. If a particular array element is
already occupied, put the number directly below the previously store number. If your
compiler supports variable-length arrays, declare array to have n rows and n columns.
If not, declare the array to have 99 rows and 99 columns.
*****************************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main()
{
    int row, column, i, size, row_move, column_move;
    int square[99][99];

    printf("\nThis program creates a magic square of a specified size.");
    printf("\nThe size must be an odd number between 1 and 99.");
    printf("\nEnter size of magic square: ");  
    scanf("%d", &size);
    
    printf("\n");
    for (row = 0; row < size; row++)
    {
        for (column = 0; column < size; column++)
        {
            square[row][column] = 0;
        }
    }

    for(i = 1, row = 0, column = size / 2; i < size * size; i++)
    {
        square[row][column] = i;

        if(row == 0)
            row_move = size - 1;
        else
            row_move = row - 1;

        if(column == size - 1)
            column_move = 0;
        else
            column_move = column + 1;

        if(square[row_move][column_move] != 0)
        {
            row++;
        }
        else {
            row = row_move;
            column = column_move;
        }
    }

    for(row = 0; row < size; row++)
    {
        for(column = 0; column < size; column++)
        {
            printf("%5d ", square[row][column]);
        }
        printf("\n");
    }

    printf("\n\n");
    return 0;
}
