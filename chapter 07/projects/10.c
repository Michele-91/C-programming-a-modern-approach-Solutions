/*************************************************************************************
Write a program that counts the number of vowels (a, e, i, o, and u) in a sentence:
**************************************************************************************/

#include <stdio.h>
#include <ctype.h>


int main()
{

    char ch;
    int vowels = 0;

    printf("Enter a sentence: ");
    while((ch = getchar()) != '\n')
    {
        switch(toupper(ch))
        {
            case 'A': case 'E': case 'I': case 'O': case 'U':
            vowels++; break;
            default: break;
        }
    }

    printf("Your sentence contains %d vowels\n", vowels);
    
    return 0;
}






