/**********************************************************
Write a program that asks the user for a two-digit number,
then prints the English word for the number:
***********************************************************/

#include <stdio.h>

int main(void) {

    int left, right;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &left, &right);
    printf("You entered the number: ");

    switch(left) {
        case 1:
            switch(right) {
            case 0: printf("Ten"); return 0; case 1: printf("Eleven"); return 0;
            case 2: printf("Twelve"); return 0; case 3: printf("Thirteen"); return 0;
            case 4: printf("Fourteen"); return 0; case 5: printf("Fifteen"); return 0;
            case 6: printf("Sixteen"); return 0; case 7: printf("Seventeen"); return 0;
            case 8: printf(" Eighteen");return 0; case 9: printf("Nineteen"); return 0;
            }
        case 9: printf("Ninety-"); break; case 8: printf("Eighty-"); break;
        case 7: printf("Seventy-"); break; case 6: printf("Sixty-"); break;
        case 5: printf("Fifty-"); break; case 4: printf("Fourty-"); break;
        case 3: printf("Thirty-"); break; case 2: printf("Twenty-"); break;
    }

    switch(right) {
        case 9: printf("Nine"); break; case 8: printf("Eight"); break;
        case 7: printf("Seven"); break; case 6: printf("Six"); break;
        case 5: printf("Five"); break; case 4: printf("Four"); break;
        case 3: printf("Three"); break; case 2: printf("Two"); break;
        case 1: printf("one"); break;
    }
    printf("\n");

    return 0;
}
