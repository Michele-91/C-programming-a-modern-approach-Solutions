

#include <stdio.h>
#include <stdbool.h>



int main()
{


    int occurrence[10] = {false};
    int digit, i;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while(n > 0)
    {
        digit = n % 10;
        occurrence[digit]++;
        n /= 10;
    }

    printf("Digit: ");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", i);
    }
    printf("\nOccurrence: ");
    for(i = 0; i < 10; i++)
    {
        printf("%d ", occurrence[i]);
    }
    printf("\n");

    return 0;
}






