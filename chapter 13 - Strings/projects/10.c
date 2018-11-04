/**********************************************************************************
Modify Programming Project 11 from Chapter 7 so that it includes
the following function:

void reverse_name(char *name);

The function expects name to point to a string containing a first name
followed by a last name. It modifies the string so that the last name
comes first, followed by a comma, a space, the first initial, and a period.
The original string may contain extra spaces before the first name, between
the first and last names, and after the last name.
***********************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define LEN 40

void reverse_name(char *name);

int main()
{
    char name[LEN+1];

    printf("Enter a first and last name : ");
    fgets(name, sizeof(name), stdin);
    reverse_name(name);
    
    return 0;
}

void reverse_name(char *name)
{
    char *p = name, initial;
    while(*p && *p == ' ')
        p++; //Skip initial white space until first char
    initial = *p++;
    while(*p && *p++ != ' '); //Skip chars after first char until whitespace
    while(*p && *p != '\n') //print last Name until enter is input
            putchar(*p++);
    printf(", %c.", initial);
}







