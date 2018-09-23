
#include <stdio.h>
#include <ctype.h>


int main() {


    char c;
    float average, total, len, words;
    average = 0.0f;
    len = 0.0f;
    total = 0.0f;
    words = 0.0f;

    printf("Enter a sentence: ");
    while((c = getchar()) != '\n')
    {

        len++;
        if(c == ' ')
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






