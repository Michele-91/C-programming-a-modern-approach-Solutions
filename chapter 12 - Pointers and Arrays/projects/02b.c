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
#include <stdbool.h>
#include <ctype.h>

#define LEN 30

char ch, *p;
int length = 0;
char message[LEN], rev_message[LEN];

void read_message(char message[], int n);
void reverse_message(char message[], char rev_message[], int n);
bool is_palindrome(char message[], char rev_message[], int n);

int main(void)
{
    read_message(message, LEN);
    reverse_message(message, rev_message, length);
    //is_palindrome(message, rev_message, length);

    if(is_palindrome(message, rev_message, length))
        printf("Palindrome");
    else
        printf("Not Palindrome");
    printf("\n");

    return 0;
}

void read_message(char message[], int n)
{
    printf("\nEnter a message: ");
    for(p = message; p < message + LEN; p++)
    {
        if((ch = getchar()) == '\n') break;
        if(isalpha(ch)) 
        {
            *p = ch;
            length++;
        }
    }
}

void reverse_message(char message[], char rev_message[], int n)
{
    for(p = message + n; p >= message; p--, n--)
    {
        rev_message[n] = *p;
    }
}

bool is_palindrome(char message[], char rev_message[], int n)
{
    char *p2 = rev_message;

    for(p = message; p < message + length; p++)
    {
        for(p2 = rev_message; p2 < rev_message + length; p2++)
        {
            if(*p != *p2)
                return false;
        }
    }

    return true;
}
