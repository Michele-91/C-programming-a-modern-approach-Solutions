/**********************************************************************************
Modify Programming Project 1 from Chapter 12 so that it includes the
following function:

    void reverse(char *message);

The function reverses the string pointed to by message.
Hint: Use two pointers, one initially pointing to the first character
of the string and the other initially pointing to the last character.
Have the function reverse these characters and then move the pointers
toward each other, repeating the process until the pointers meet.
***********************************************************************************/

#include <stdio.h>
#include <string.h>

#define LEN 30

void reverse(char *message);

int main(void)
{
    char message[LEN+1], ch, *p;
    printf("\nEnter a message: ");
    for(p = message; p < message + LEN; p++)
    {
        if((ch = getchar()) == '\n') break;
        *p = ch;
    }
    *p = '\0';

    reverse(message);
    printf("Reversal is: %s", message);

    return 0;
}

void reverse(char *message)
{
    char *first, *last, temp;

    for(first = message, last = message + strlen(message) - 1;
        first <= last;
        first++, last--)
    {
        temp = *first;
        *first = *last;
        *last = temp;
    }

}
