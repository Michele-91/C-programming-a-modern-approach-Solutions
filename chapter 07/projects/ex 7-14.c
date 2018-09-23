
#include <stdio.h>
#include <ctype.h>


int main() {


    char c;
    float len;
    int words;
    len = 0.0f;
    words = 1;

    printf("Enter a sentence: ");
    while((c = getchar()) != '\n')
    {
        if(c == ' ')
        {
            words++;
        } else
        {
            len++;
        }

    }

    printf("Average word length: %.1f\n", len / words);

    return 0;
}






