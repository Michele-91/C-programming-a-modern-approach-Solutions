/**********************************************************************************
Modify Programming Project 11 from Chapter 5 so that it uses arrays
containing pointers to strings instead of switch statements. For example,
instead of using a switch statement to print the word for the first digit,
use the digit as an index into an array that contains the strings "twenty",
"thirty", and so forth.
***********************************************************************************/


#include <stdio.h>

int main(void) {

    int left, right;
    char *first_digit[] = {"twenty-", "thirty-", "fourty-", "fifty-", "sixty-", "seventy-", "eighty-", "ninety-"};
    char *first_digit_tens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *second_digit[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &left, &right);
    printf("You entered the number: ");

    if(left == 1)
    {
        printf("%s", first_digit_tens[right]);
    } else {
        printf("%s%s", first_digit[left-2], second_digit[right-1]);
    }

    printf("\n");

    return 0;
}
