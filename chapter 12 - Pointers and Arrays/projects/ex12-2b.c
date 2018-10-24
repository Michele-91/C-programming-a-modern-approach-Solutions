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

/***************************************************************************
(a) Write a program that reads a message, then checks whether it's a
palindrome (the letters in the message are the same from right to left):

Enter a message: He lived as a devil, eh?
Palindrome

Enter a message: Madam, I am Adam.
Not a palindrome

Ignore all characters that aren't letters. Use integer variables to
keep track of positions in the array.

(b) Revise the program to use pointers instead of integers to keep
track of positions in the array.
***************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define LEN 30

int read_message(char a[], int n);
bool is_palindrome(char a[], int n);

int main(void)
{
    char message[LEN];

    int length = read_message(message, LEN);

    if(is_palindrome(message, length))
        printf("Palindrome");
    else
        printf("Not Palindrome");
    printf("\n");

    return 0;
}

int read_message(char a[], int n)
{
    int length = 0;
    char ch, *p;
    printf("\nEnter a message: ");
    for(p = a; p < a + LEN; p++)
    {
        if((ch = getchar()) == '\n') break;
        if(isalpha(ch) && ch != isblank(ch) && ch != ispunct(ch));
        {
            *p = tolower(ch);
            length++;
        }
    }

    return length;
}

bool is_palindrome(char a[], int n)
{
    char *p, *p2;
    for(p = a, p2 = a + n - 1; 
        p < a + n - 1; 
        p++, p2--)
    {
            if(*p != *p2)
                return false;
    }
    return true;
}
