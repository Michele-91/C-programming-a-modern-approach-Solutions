/**********************************************************************************
(a) Write a function named capitalize that capitalizes all letters in its
    argument. The argument will be a null-terminate string containing 
    arbitrary characters, not just letters. Use array subscripting to 
    access the characters in the string. Hint: Use the toupper function to 
    convert each character to upper-case.

(b) Rewrite the capitalize function, this time only using pointer arithmetic
    to access the characters in the string.
***********************************************************************************/


#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void capitalize_a(char str[]);
void capitalize_b(char *str);
void print_string(const char *str);

int main(void)
{
    char ch;
    char str[] = "mkep4.KllKiw'l,sAsW";

    printf("\nOriginal string: ");
    print_string(str);

    printf("\nTo make the string uppercase, type\n\t""a"" to use array subscripting or\n\t""b"" to use pointer arythmetic: ");
    scanf("%c", &ch);
    if(ch == 'a' || ch == 'A')
        capitalize_a(str);
    else if (ch == 'b' || ch == 'B')
        capitalize_b(str);
    else {
        printf("\nError: please type ""a"" or ""b"" \n\n");
        exit(EXIT_FAILURE);
    }

    printf("\nCapitalized String: ");
    print_string(str);
    printf("\n\n");
    
    return 0;
}

void capitalize_a(char str[])
{
    int i = 0;
    
    for (; str[i] != '\0'; i++)
        str[i] = toupper(str[i]);                                                 
}

void capitalize_b(char *str)
{
    for(; *str != '\0'; str++)
        *str = toupper(*str);                        
}

void print_string(const char *str)
{
    const char *p;

    for(p = str; *p != '\0'; p++)
        printf("%c", *p);
    printf("\n");
}
