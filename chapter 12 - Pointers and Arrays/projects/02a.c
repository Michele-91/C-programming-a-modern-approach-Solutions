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
    int i, length = 0;
    char ch;
    printf("\nEnter a message: ");
    for(i = 0; i < LEN; i++)
    {
        if((ch = getchar()) == '\n') break;
        if(isalpha(ch) && ch != isblank(ch) && ch != ispunct(ch)); 
        {
            a[i] = tolower(ch);
            length++;
        }
    }

    return length;
}

bool is_palindrome(char a[], int n)
{
    int i, j;
    for(i = 0, j = n - 1; 
        i < n - 1; 
        i++, j--)
    {
            if(a[i] != a[j])
                return false;
    }

    return true;
}
