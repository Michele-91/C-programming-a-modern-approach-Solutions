/********************************************************************************
Write a program that prompts the user to enter a number n, then prints all even 
squares between 1 and n 
*********************************************************************************/

#include <stdio.h>


int main()
{

    int n, square, i, odd;

    printf("This program prints a table of squares\n");
    printf("Enter number of entries in the table: ");
    scanf("%d", &n);


    odd = 3;
    for (i = 1, square = 1; i <= n; odd += 2, ++i) {
        printf("%10d%10d\n", i, square);
        square += odd;
    }

    return 0;
}






