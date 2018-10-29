
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

//THIS VERSION MINIMIZES MAIN AND USES MANY ADDITIONAL FUNCTIONS


#include <stdio.h>
#include <string.h>

#define LEN 20

void initialize_words(void);
void get_current_word(void);
void compare_words(void);

char smallest[LEN+1];
char largest[LEN+1];
char current_word[LEN+1];

int main(void)
{
    initialize_words();

    while(strlen(current_word) != 4)
        compare_words();

    printf("\nSmallest word: %s\n", smallest);
    printf("Largest word: %s", largest);
}

void get_current_word(void)
{
    printf("Enter word: ");
    scanf("%20s", current_word);
}


void initialize_words(void)
{
    get_current_word();
    strcpy(smallest, current_word);
    strcpy(largest, current_word);
}

void compare_words(void)
{
    get_current_word();
    if((strcmp(current_word, smallest) <= 0))
            strcpy(smallest, current_word);
    else if((strcmp(current_word, largest) > 0))
            strcpy(largest, current_word);
}

