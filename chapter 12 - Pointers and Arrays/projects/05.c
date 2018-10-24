/***************************************************************************
Modify Programming Project 14 from Chapter 8 so that it uses a pointer
instead of an integer to keep track of the current position in the 
array that contains the sentence.
***************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define LEN 200

char terminating_char;

int read_sentence(char a[], int n);
void reverse_sentence(char a[], int n);

int main()
{
    char sentence[LEN] = {0};

    int sentence_length = read_sentence(sentence, LEN);
    reverse_sentence(sentence, sentence_length);
    printf("%c\n\n", terminating_char);

    return 0;
}

int read_sentence(char a[], int n)
{
    int i, sentence_length = 0;
    char *p, ch;

    printf("\nEnter sentence: ");
    /* Populate sentence array until terminating character found */
    for (p = a; (ch = getchar()) != '\n' && p < a + LEN; p++) {
        if (ch == '.' || ch == '?' || ch == '!') {
            terminating_char = ch;
            break;
        } else {
            *p = ch;
            sentence_length++;
        }
    }
    
    return sentence_length;
}

void reverse_sentence(char a[], int n)
{

    int current_word_length = 0, i, j;
    char *p, *p2;

    printf("\nReversed order: ");
    /* Iterate backwards through sentence array */
    for (p = a + n - 1; p >= a; p--) 
    {

        /* If we find a space, or we are at the start of the sentence
         * we've found a new word */
        if (*p == ' ' || p == a) 
        {

            /* Special case when we are at the start of the sentence,
             * normally we iterate from a+1...word length to skip the white space, but
             * the start of the sentence will have no preceding white space */
            if (p == a) 
            { 
                p--;
            }

            /* Iterate forwards over the word we found and print */
            for (p2 = p + 1; p2 <= p + current_word_length + 1; p2++)
                printf("%c", *p2);

            current_word_length = 0;
        } else 
        {
            current_word_length++;
        }
    }
}

