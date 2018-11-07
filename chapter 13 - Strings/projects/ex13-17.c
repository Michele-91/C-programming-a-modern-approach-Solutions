/**********************************************************************************
Modify Programming Project 2 from Chapter 12 so that it includes the
following function:

    bool_is_palindorme(const char *message);

The functio returns true if the string pointed to by message is a palindrome.
***********************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define LEN 30

void read_message(char *message);
bool is_palindrome(const char *message);

int main(void)
{
    char message[LEN+1];

    read_message(message);

    if(is_palindrome(message))
        printf("Palindrome");
    else
        printf("Not Palindrome");
    printf("\n");

    return 0;
}

void read_message(char *message)
{
    char ch, *p;
    printf("\nEnter a message: ");
    for(p = message; p < message + LEN; p++)
    {
        if((ch = getchar()) == '\n') break;
        if(isalpha(ch) && ch != isblank(ch) && ch != ispunct(ch));
        {
            *p = tolower(ch);
        }
    }
    *p = '\0';
}

bool is_palindrome(const char *message)
{
    const char *p, *p2;
    for(p = message, p2 = message + strlen(message) - 1; 
        p < message + strlen(message) - 1; 
        p++, p2--)
    {
            if(*p != *p2)
                return false;
    }
    return true;
}
