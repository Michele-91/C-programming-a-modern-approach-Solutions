/**********************************************************************************
Modify Programming Project 13 from Chapter 7 so that it includes
the following function:

double compute_average_word_length(const char *sentence);

The function returns the average length of the words in the string pointed to
by sentence.
***********************************************************************************/


#include <stdio.h>
#include <ctype.h>

#define LEN 40

double compute_average_word_length(const char *sentence);

int main()
{
    char sentence[LEN+1];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    printf("Average word length: %.1f\n", compute_average_word_length(sentence));
    
    return 0;
}

double compute_average_word_length(const char *sentence)
{
    //const char *p = sentence;
    float average, characters, words;
    average = 0.0f;
    characters = 0.0f;
    words = 0.0f;

    while(*sentence)
    {
        while(*sentence && !isspace(*sentence))
        {
            characters++;
            sentence++;
        }
        words++;
        while(*sentence && isspace(*sentence))
            sentence++;
    }

    average = characters / words;

    return average;
}







