
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






