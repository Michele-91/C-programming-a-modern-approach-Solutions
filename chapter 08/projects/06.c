/****************************************************************************************
The prototypical Internet newbie is a fellow named B1FF, who has a unique way of writing
messages. Write a "B1FF filter" that reads a message entered by the user and translates
it into B1FF-speak.
Your program should convert the message to upper-case letters, substitute digits for
certain letters, and then append 10 or so exclamation marks.
****************************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define MAX ((int)(sizeof(m) / sizeof(m[0])))


int main()
{
    char m[50], c;
    int i;
    printf("\nEnter message: ");

    for (i = 0; i < MAX; i++)
    {
        switch (c = toupper(getchar()))
        {
            case 'A':
                m[i] = '4'; break;
            case 'B':
                m[i] = '8'; break;
            case 'E':
                m[i] = '3'; break;
            case 'I':
                m[i] = '1'; break;
            case 'O':
                m[i] = '0'; break;
            case 'S':
                m[i] = '5'; break;
            default:
                m[i] = c; break;
        }
        if (c == '\n')
            break;
    }

    printf("In B1FF-speak: ");
    for (i = 0; i < MAX; i++)
    {
        if (m[i] == '\n')
            break;
        putchar(m[i]);
    }
    printf("!!!!!!!!!!\n\n");


    return 0;
}






