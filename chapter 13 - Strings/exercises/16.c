/**********************************************************************************
Use the techniques of Section 13.6 to condense the count_spaces function
of Section 13.4. In particular, replace the for statement by a while loop.
***********************************************************************************/

#include <stdio.h>

int count_spaces(const char *s);

int main(void)
{
    const char string[] = "Just a test sentence to try out the function.";

    printf("%d", count_spaces(string));
}

int count_spaces(const char *s)
{
    int count = 0;

    while(*s)
        if(*s++ == ' ')
            count++;
    
    return count;
}
