/**********************************************************************************
Write a function named censor that modifies the string by replacing 
every occurence of foo by xxx. 
For example, the string "food fool" would become "xxxd xxx1". 
Make the function as short as possible without sacrificing clarity.
***********************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void censor(char s[]);
void print_string(const char *s);

int main(void)
{
    char str[] = "foo fighters members enjoy tasty food while crossing the beach on foot like fools";

    printf("\nOriginal string: ");
    print_string(str);

    censor(str);
    printf("\nCensored string: ");
    print_string(str);

    return 0;
}

void censor(char s[])
{
    int i;

    for(i = 0; s[i] != '\0'; i++)
        if(s[i] == 'f' && s[i+1] == 'o' && s[i+2] == 'o')
            s[i] = s[i+1] = s[i+2] = 'x';
    s[i] = '\0';
}

void print_string(const char *s)
{
    const char *p;

    for(p = s; *p != '\0'; p++)
        printf("%c", *p);
    printf("\n");
}
