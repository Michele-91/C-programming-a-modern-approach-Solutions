/***********************************************************************
Modify Programming Project 16 from Chapter 8 so that it includes the
following functions:
void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);
main will call read_word twice, once for each of the two words entered
by the user. As it reads a word, read_word will use the letters in the
word to update the counts array, as described in the original project.
(main will declare two arrays, one for each word. These arrays are
used to track how many times each letter occurs in the words.) main
will then call equal_array, passing it the two arrays. equal_array
will return true if the elements in the two arrays are identical
(indicating that the words are anagrams) and false otherwise.
***********************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void)
{
    int word1[26] = {0};
    int word2[26] = {0};
    
    printf("\nEnter first word: ");
    read_word(word1);
    printf("Enter second word: ");
    read_word(word2);

    printf("The words are ");
    if(equal_array(word1, word2) == true)
        printf("anagrams!\n");
    else
        printf("not anagrams!\n");

    printf("\n\n");

    return 0;
}

void read_word(int counts[26])
{
    int i;
    char ch;
    for (i = 0; (ch = getchar()) != '\n' && i < 26; i++) {
        if(isalpha(ch))
        {
            counts[toupper(ch) - 'A']++;
        }
    }
}

bool equal_array(int counts1[26], int counts2[26])
{
    int i;
    bool anagram = true;
    for(i = 0; i < 26; i++)
    {
        if(counts1[i] != counts2[i])
        {
            anagram = false;
            break;
        }
    }
    return anagram;
}
