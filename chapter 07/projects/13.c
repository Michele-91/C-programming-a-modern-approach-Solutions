/******************************************************************************
Write a program that calculates the average word length for a sentence:

    Enter a sentence: It was deja vu all over again.
    Average word length: 3.4

For simplicity, your program should consider a punctuation mark to be a part
of the word to which it is attached. Display the average word length to one
decimal place.
*******************************************************************************/

#include <stdio.h>
#include <ctype.h>


int main() 
{
    char ch;
    float average, total, len, words;
    average = 0.0f;
    len = 0.0f;
    total = 0.0f;
    words = 0.0f;

    printf("Enter a sentence: ");
    while((ch = getchar()) == ' ');   //skips white spaces if user inputs them at the beginning
    while((ch = getchar()) != '\n')
    {
        len++;
        if(ch == ' ')
        {
            len--;
            words++;
            total += len;
            len = 0.0f;
        }
    }
    average = total / words;
    printf("Average word length: %.1f\n", average);

    return 0;
}






