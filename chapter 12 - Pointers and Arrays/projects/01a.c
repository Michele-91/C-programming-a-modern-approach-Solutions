/***************************************************************************
(a) Write a program that reads a message, then prints the reversal of the
    message:

Enter a message: Don't get mad, get even.
Reversal is: .neve teg ,dam teg t'noD

Hint: Read the message one character at a time (using getchar) and store the
characters in an array. Stop reading when the array is full or the character
read is '\n'.

(b) Revise the program to use a pointer instead of an integer to keep track
    of the current position in the array.
***************************************************************************/

#include <stdio.h>

#define LEN 30

int main(void)
{
    char message[LEN], ch;
    int i;
    printf("Enter a message: ");
    for(i = 0; i < LEN; i++)
    {
        if((ch = getchar()) == '\n') break;
        message[i] = ch; 
    }

    printf("Reversal is: ");
    for(i = LEN - 1; i >= 0; i--)
        putchar(message[i]);
    printf("\n");
    
    return 0;
}
