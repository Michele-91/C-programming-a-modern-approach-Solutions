/**********************************************************************************
Write a program that finds the "smallest" and "largest" in a series of words.
After the user enters the words, the program will determine which words would
come first and last if the words were listed in dictionary order. The program
must stop accepting input when the user enters a four-letter word. Assume
that no word is more than 20 letters long. An interactive session with the
program might look like this:

    Enter word: dog
    Enter word: zebra
    Enter word: rabbit
    Enter word: catfish
    Enter word: walrus
    Enter word: cat
    Enter word: fish

    Smallest word: cat
    Largest word: zebra

Hint: Use two strings named smallest_word and largest_word to keep track of
the "smallest" and "largest" word; if the new word is "smaller," use strcpy
to save it in smallest_word. Do a similar comparison with largest_word. Use
strlen to determine when the user has entered a four letter word.
***********************************************************************************/


//THIS VERSION DOES NOT USE ANY ADDITIONAL FUNCTIONS TO MAIN

#include <stdio.h>
#include <string.h>

#define LEN 20

int main(void)
{
    char word[LEN+1], smallest[LEN+1], largest[LEN+1];

    printf("\nEnter word: ");
    scanf("%s", word);
    strcpy(smallest, (strcpy(largest, word)));

    while (strlen(word) != 4)
    {
        printf("Enter word: ");
        scanf("%20s", word);
        if (strcmp(word, smallest) < 0)
            strcpy(smallest, word);
        if (strcmp(word, largest) > 0)
            strcpy(largest, word);
    }

    printf("\nSmallest word: %s", smallest);
    printf("\nLargest word: %s\n\n", largest);
    return 0;
}
