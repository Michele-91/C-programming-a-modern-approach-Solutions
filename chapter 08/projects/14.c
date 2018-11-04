/**************************************************************************************
Write a program that reverses the words in a sentence:
-- Enter a sentence: you can cage a swallow can't you? --
-- Sentence reversal: you can't swallow a cage can you? --
Hint: use a loop to read the characters one by one and store them in a one-dimensional
char array. Have the loop stop at the period, question mark, or exclamation point
(the "terminating character"), which is saved in a separate char variable. Then use a
second loop to search backward through the array for the beginning of the last word.
Print the last word, then search backward for the next-to-last word. Repeat until the 
beginning of the array is reached. Finally, put the terminating character.
**************************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define SIZE 50

int main()
{

    char ch, terminating_char = 0, sentence[SIZE]; 
    int i, j, last_space;

    printf("\nEnter a sentence: ");
    for (i = 0; (ch = getchar()) != '\n'; i++)
    {
        if (ch == '.' || ch == '?' || ch == '!')
        {
            last_space = i;
            terminating_char = ch;
            break;
        }
        sentence[i] = ch;
    }

    if (terminating_char == 0)
    {
        printf("Sentence needs a terminating character. (./?/!)\n\n");
        return 0;
    }

    
    printf("Reversal of sentence: ");
    for (i = last_space; i > 0; i--)     //starts counting backwards from number value inside the array of the terminating character
    {
        if (sentence[i] == ' ')             
        {
            for (j = i + 1; j != last_space; j++)
            {
                putchar(sentence[j]);
            }
            last_space = i;
            putchar(sentence[i]);           //prints empty space between words
        }
    }
    
    /*goes through array from first letter to first space to print the first word (conditional in line 46 doesn't execute
    for the last word and therefore the previous loop won't print it)*/
    for(i = 0; sentence[i] != '\0' && sentence[i] != ' '; i++)
    {
        putchar(sentence[i]);
    }
    printf("%c\n\n", terminating_char);

    return 0;
}





