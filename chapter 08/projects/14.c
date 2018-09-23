/**************************************************************************************
Write a program that reverses the words in a sentence.
Hint: use a loop to read the characters one by one and store them in a one-dimensional
char array. Have the loop stop at the period, question mark, or exclamation point
(the "terminating character"), which is saved in a separate char variable. Then use a
second loop to search backward through the array for the beginning of the last word.
Print the last word, then search backward for the next-to-last word. Repeat until the 
beginning of the array is reached. Finally, put the terminating character.
**************************************************************************************/

#include <stdio.h>
#include <ctype.h>

int main()
{

    char ch, sentence[100], terminating_char;
    int i, j, num_words = 0;

    printf("Enter a sentence: ");
    for(i = 0;(ch = toupper(getchar())) != '\n' && i < 100; i++)
    {
        if(ch == ' ')
        {
            num_words++;
        }
        if(ch == '.' || ch == '?' || ch == '!')
        {
            terminating_char = ch;
            break;
        }
        sentence[i] = ch;
    }

    printf("Reversal of sentence: ");
    for(i = 100; i > 0; i--)
    {
        while(sentence[i] == ' ') //skips extra spaces in the array initially and skips space between words in following iterations
        ;
        while(sentence[i] != ' ') //skips word when going from right to left
        ;
        if(sentence[i] == ' ') 
        {
            for(j = i+1; sentence[j] != ' '; j++)
            {
                printf("%c",sentence[j]); //prints characters in word
            }
            i++; //goes up one element so the two while in the outer loop can keep working properly
            putchar(' '); //prints space between words
            num_words--; //subtracts word from total number of words
        }
        if(num_words == 0)
            break;
    }
    putchar(terminating_char);
    printf("\n\n");

    return 0;

}





