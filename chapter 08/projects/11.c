/**************************************************************************************
Modify Programming Project 4 from Chapter 7.
The program will need to store the phone number (either in its original form or in its
numeric form) in an array of character until it can be printed. You may assume that
phone number is no more than 15 characters long.
**************************************************************************************/

#include <stdio.h>
#include <ctype.h>


#define SIZE 15

int main()
{

    char ch;
    char num[15] = {0};
    int i = 0;

    printf("Enter phone number: ");
    while((ch = toupper(getchar())) != '\n')
    {
       switch(ch)
       {
            case 'A': case 'B': case 'C':
            num[i] = '2';
            break;
            case 'D': case 'E': case 'F':
            num[i] = '3';
            break;
            case 'G': case 'H': case 'I':
            num[i] = '4';
            break;
            case 'J': case 'K': case 'L':
            num[i] = '5';
            break;
            case 'M': case 'N': case 'O':
            num[i] = '6';
            break;
            case 'P': case 'R': case 'S':
            num[i] = '7';
            break;
            case 'T': case 'U': case 'V':
            num[i] = '8';
            break;
            case 'W': case 'X': case 'Y':
            num[i] = '9';
            break;
            default:
            num[i] = ch;
       }
       i++;
    }

    printf("In numeric form: ");
    for(i = 0; i < SIZE; i++)
    {
        putchar(num[i]);
    }
    printf("\n");

  return 0;
}





