/**********************************************************************************
Modify Programming Project 15 from Chapter 8 so that it includes the
following function:

    void encrypt(char *message, int shift);

The function expects message to point to a string containing the message to
be encrypted; shift represents the amount by which each letter in the message
is to be shifted.
***********************************************************************************/

#include <stdio.h>

#define MAX_VALUE 80

void encrypt(char *message, int shift);

int main(void)
{
    char ch, sentence[MAX_VALUE+1];
    int shift, i;

    printf("Enter message to be encrypted: ");
    for (i = 0; (ch = getchar()) != '\n'; i++)
        sentence[i] = ch;
    sentence[i] = '\0';

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    if (shift < 1 || shift > 25)
    {
        printf("Incorrect shift amount.\n\n");
        return 0;
    }

    encrypt(sentence, shift);
    printf("\n\n");

    return 0;
}

void encrypt(char *message, int shift)
{
    char *p;

    printf("Encrypted message: ");    
    for (p = message; *p; p++) {
        if (*p >= 'A' && *p <= 'Z') {
            printf("%c", ((*p - 'A') + shift) % 26 + 'A');
        }
        else if (*p >= 'a' && *p <= 'z') {
            printf("%c", ((*p - 'a') + shift) % 26 + 'a');
        }
        else {
            printf("%c", *p);
        }
    }
}






