/*Modify the repdigit.c program of Section 8.1 so that it prints a table showing how many times each digit appears
in the number
*/

#include <stdio.h>
#include <stdbool.h>



int main()
{

    int occurrence[10] = {false};
    int digit, i;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    do
    {
        while(n > 0)
        {
            digit = n % 10;
            occurrence[digit]++;
            n /= 10;
        }

        printf("Digit: ");
        for(i = 0; i < 10; i++)
            printf("%d ", i);

        printf("\nOccurrences: ");
        for(i = 0; i < 10; i++)
        {
            printf("%d ", occurrence[i]);
            occurrence[i] = 0;
        }

        printf("\nEnter a number: ");
        scanf("%ld", &n);
    }while(n > 0);

    return 0;
}






