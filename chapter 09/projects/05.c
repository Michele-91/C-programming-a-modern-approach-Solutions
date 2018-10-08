/***********************************************************************
Modify Programming Project 17 from Chapter 8 so that it includes the
following functions:
void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);
After obtaining the number n from the user, main will call
create_magic_square, passing it an n x n array that is declared inside
main. create_magic_square will fill the array with the numbers 1,2,...,
n^2 as described in the original project. main will then call
print_magic_square, which will display the array in the format
described in the original project. Note: if your compiler doesn't
support variable-length arrays, declare the array in main to be 99x99
instead of n x n and use the following prototypes instead:
void create_magic_square(int n, char magic_square[99][99]);
void print_magic_square(int n, char magic_square[99][99]);
***********************************************************************/

#include <stdio.h>
#include <ctype.h>

void create_magic_square(int n, char magic_square[99][99]);
void print_magic_square(int n, char magic_square[99][99]);

int main(void)
{ 
    int size;
    char square[99][99];

    printf("\nThis program creates a magic square of a specified size.");
    printf("\nThe size must be an odd number between 1 and 99.");
    printf("\nEnter size of magic square: ");  
    scanf("%d", &size);
    
    printf("\n");
    create_magic_square(size, square);
    print_magic_square(size, square);

    return 0;
}

void create_magic_square(int n, char magic_square[99][99])
{
    int row, column, i, row_move, column_move;
    for (row = 0; row < n; row++)
    {
        for (column = 0; column < n; column++)
        {
            magic_square[row][column] = 0;
        }
    }

    for(i = 1, row = 0, column = n / 2; i < n * n; i++)
    {
        magic_square[row][column] = i;

        if(row == 0)
            row_move = n - 1;
        else
            row_move = row - 1;

        if(column == n - 1)
            column_move = 0;
        else
            column_move = column + 1;

        if(magic_square[row_move][column_move] != 0)
        {
            row++;
        }
        else {
            row = row_move;
            column = column_move;
        }
    }
}

void print_magic_square(int n, char magic_square[99][99])
{
    int row, column;
    for(row = 0; row < n; row++)
    {
        for(column = 0; column < n; column++)
        {
            printf("%5d ", magic_square[row][column]);
        }
        printf("\n");
    }
    printf("\n\n");
}
