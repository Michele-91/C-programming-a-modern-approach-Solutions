/* Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then displays
the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns, and diagonals. */

#include <stdio.h>

int main()
{
    int one, two, three, four, five, six, seven, eight, nine,
    ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen;
    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
          &one, &two, &three, &four, &five, &six, &seven, &eight, &nine,
          &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);

    printf("\n%2d  %2d  %2d  %2d\n", one, two, three, four);
    printf("%2d  %2d  %2d  %2d\n", five, six, seven, eight);
    printf("%2d  %2d  %2d  %2d\n", nine, ten, eleven, twelve);
    printf("%2d  %2d  %2d  %2d\n", thirteen, fourteen, fifteen, sixteen);

    printf("\nRow sums: %d %d %d %d\n", one + two + three + four,
                                      five + six + seven + eight,
                                      nine + ten + eleven + twelve,
                                      thirteen + fourteen + fifteen + sixteen);

    printf("Column sums: %d %d %d %d\n", one + five + nine + thirteen,
                                         two + six + ten + fourteen,
                                         three + seven + eleven + fifteen,
                                         four + eight + twelve + sixteen);

    printf("Diagonal sums: %d %d\n", one + six + eleven + sixteen,
                                four + seven + ten + thirteen);

    //16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
    //16 1 15 2 14 3 13 4 12 5 11 6 10 7 9 8


    return 0;
}
