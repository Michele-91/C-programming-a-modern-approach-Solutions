/**************************************************************************************
Modify Programming Project 11 from chapter 7.
The program will need to store the last name (but not the first name) in an array of
characters until it can be printed. You may assume that the last name is no more than
20 characters long.
**************************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 20

int main()
{

    int i;
    char ch, initial;
    char last_name[MAX_SIZE] = {0};

    printf("Enter a first and last name : ");
    while((ch = getchar()) == ' '); //Skip initial white space until first char
    initial = ch;
    while((ch = getchar()) != ' '); //Skip chars after first char until whitespace

    for(i = 0; (ch = getchar()) != '\n'; i++)  //assign last name characters to array last_name[MAX_SIZE]
    {
        if(ch != ' ')
            last_name[i] = ch;
    }

    for(i = 0; last_name[i] != '\0'; i++)
    {
        putchar(last_name[i]);
    }
    printf(", %c.", initial);


    return 0;

}





