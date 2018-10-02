/****************************************************************************************
Write a program that tests whether two words are anagrams. 
Write a loop that reads the first word, character by character, using an array of 26
integers to keep track of how many times each letter has been seen. Use another loop to
read the second word, except this time decrementing the corresponding array element a
each letter is read. Both loops should ignore any characters that aren't letters, and
both should treat upper-case letters in the same way as lower-case letters. After the
second word has been read, use a third loop to check whether all the elements in the
array are zero. If so, the words are anagrams. Hint: You may wish to use functions from
<ctype.h>, such as isalpha and tolower.
*****************************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{ 
    char ch;
    int word[26] = {0}, i;
    bool anagram = true;

    printf("\nEnter first word: ");
    for (i = 0; (ch = getchar()) != '\n' && i < 26; i++) 
    {
        if(isalpha(ch))
            word[toupper(ch) - 'A']++;
    }

    printf("Enter second word: ");
    for (i = 0; (ch = getchar()) != '\n' && i < 26; i++) 
    {
        if(isalpha(ch))
            word[toupper(ch) - 'A']--;
    }

    for(i = 0; i < 26; i++)
    {
        if(word[i] != 0)
        {
            anagram = false;
            break;
        }
    }

    if(anagram == true)
        printf("The words are anagrams!\n");
    else
        printf("The words are not anagrams!\n");

    printf("\n\n");
    return 0;
}
