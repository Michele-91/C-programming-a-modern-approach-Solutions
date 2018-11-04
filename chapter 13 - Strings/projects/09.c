/**********************************************************************************
Modify Programming Project 10 from Chapter 7 so that it includes
the following function:

int computer_vowel_count(const char *sentence);

The function returns the number of vowels in the string pointed to 
by the sentence parameter
***********************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define LEN 40

int computer_vowel_count(const char *sentence);

int main()
{
    char ch[LEN + 1];

    printf("Enter a sentence: ");
    gets(ch);

    printf("Your sentence contains %d vowels\n", computer_vowel_count(ch));
    
    return 0;
}

int computer_vowel_count(const char *sentence)
{
    int vowels = 0;
    
    while(*sentence)
    {
        switch(toupper(*sentence++))
        {
            case 'A': case 'E': case 'I': case 'O': case 'U':
            vowels++; break;
            default: break;
        }
    }

    return vowels;
}
