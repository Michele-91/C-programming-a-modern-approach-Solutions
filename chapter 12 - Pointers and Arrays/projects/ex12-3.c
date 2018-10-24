/***************************************************************************
Simplify Programming Project 1(b) by taking advantage of the fact that 
an array name can be used as a pointer.
***************************************************************************/

#include <stdio.h>

#define LEN 30

int main(void)
{
    char message[LEN], ch, *p;
    printf("\nEnter a message: ");
    for(p = message; p < message + LEN; p++)
    {
        if((ch = getchar()) == '\n') break;
        *p = ch;
    }

    printf("Reversal is: ");
    for(p = message + LEN - 1; p >= message; p--)
        putchar(*p);
    printf("\n");

    return 0;
}
