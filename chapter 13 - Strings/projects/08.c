/**********************************************************************************
Modify Programming Project 5 from Chapter 7 so that it includes
the following function:

int compute_scrabble_value(const char *word);

The function returns the SCRABBLE value of the string pointed
to by word.
***********************************************************************************/

#include <stdio.h>
#include <math.h>
#include <ctype.h>

#define LEN 50   

int compute_scrabble_value(const char *word);

int main()
{
    char word[LEN + 1];
    printf("Enter a word: ");
    scanf("%s", word);
    printf("Scrabble value: %d\n", compute_scrabble_value(word));

    return 0;
}

int compute_scrabble_value(const char *word)
{
    int sum = 0;

    while(*word)
    {
        switch(toupper(*word++))
        {
            case 'D': case 'G':
            sum += 2; break;
            case 'B': case 'C': case 'M': case 'P':
            sum += 3; break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
            sum += 4; break;
            case 'K':
            sum += 5; break;
            case 'J': case 'X':
            sum += 8; break;
            case 'Q': case 'Z':
            sum += 10; break;
            default:
            sum ++;
        }
    }

    return sum;
}






