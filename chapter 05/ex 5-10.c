/* Using the switch statement, write a program that converste a numerical grade into a letter grade: */

#include <stdio.h>

int main(void) {

    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    if(grade > 100 || grade < 0) {
        printf("Error: invalid number\n");
        return 0;
    }

    switch(grade / 10) {
    case 10:
        case 9: printf("Letter grade: A\n"); break;
        case 8: printf("Letter grade: B\n"); break;
        case 7: printf("Letter grade: C\n"); break;
        case 6: printf("Letter grade D\n"); break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0: printf("Letter grade: F\n"); break;
        default: printf("Error: invalid number\n"); break;
    }

    return 0;
}
