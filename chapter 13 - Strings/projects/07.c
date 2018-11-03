/**********************************************************************************
Modify Programming Project 11 from Chapter 5 so that it uses arrays
containing pointers to strings instead of switch statements. For example,
instead of using a switch statement to print the word for the first digit,
use the digit as an index into an array that contains the strings "twenty",
"thirty", and so forth.
***********************************************************************************/

/* This version has a loop that keeps the program executing until the user writes the number 0. */

#include <stdio.h>

int main(void) {

    int left, right;
    char *first_digit[] = {"twenty-", "thirty-", "fourty-", "fifty-", "sixty-", "seventy-", "eighty-", "ninety-"};
    char *first_digit_tens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *second_digit[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

    do
    {
        printf("Enter a two-digit number (enter 0 to stop the program): ");
        scanf("%1d%1d", &left, &right);

        if(left == 0 || (left == 0 && right == 0))
        {
            return 0;
        } 
        
        printf("You entered the number: ");
        if(left == 1)
        {
            printf("%s", first_digit_tens[right]);
        } else {
            printf("%s%s", first_digit[left-2], second_digit[right-1]);
        }
        printf("\n\n");
    }while(1);

    return 0;
}
