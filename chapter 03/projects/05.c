/***************************************************************************************************** 
Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then displays
the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns, and diagonals. 
******************************************************************************************************/

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

    return 0;
}
