/*
Modify the repdigit.c program of Section 8.1 so that it shows which digits (if any) were repeated
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool digit_seen[10] = {false};
    bool digit_rep[10] = {false};

    int digit, i;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while(n > 0)
    {
        digit = n % 10;
        if(digit_seen[digit])
            digit_rep[digit] = true;
        digit_seen[digit] = true;
        n /= 10;
    }

    printf("Repeated digit(s): ");
    for(i = 0; i < sizeof(digit_rep) / sizeof(digit_rep[0]); i++)
    {
        if(digit_rep[i])
            printf("%d ", i);
    }

    return 0;
}






