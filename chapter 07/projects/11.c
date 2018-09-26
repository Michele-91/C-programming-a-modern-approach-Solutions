/*********************************************************************
Write a program that takes the first name and last name entered by
the user and displays the last name, a comma, and the first
initial, followed by a period:
 
Enter a first and last name: Lloyd Fosdick
Fosdick, L.
 
Ths user's input may contain extra spaces before the first name,
between the first and last names, and after the last name.
*********************************************************************/

#include <stdio.h>
#include <ctype.h>


int main()
{

    char ch, initial;

    printf("Enter a first and last name : ");

    while((ch = getchar()) == ' '); //Skip initial white space until first char
    initial = ch;
    while((ch = getchar()) != ' '); //Skip chars after first char until whitespace

    while((ch = getchar()) != '\n') //print last Name until enter is input
            putchar(ch);

    printf(", %c.", initial); //print initial at the right of previously printed last name

    return 0;
}






