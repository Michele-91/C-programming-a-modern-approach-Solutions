/*Write a program that asks the user for a 24-hour time, then displays the time in 12-hour form */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


int main()
{
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour < 12 && hour >= 00) {
        printf("Equivalent 12-hour time: %.2d:%.2d AM\n", hour, minute);
    } else if (hour == 12) {
        printf("Equivalent 12-hour time: %.2d:%.2d PM\n", hour, minute);
    } else if (hour >= 13 && hour <= 24) {
        hour -= 12.00;
        printf("Equivalent 12-hour time: %.2d:%.2d PM\n", hour, minute);
    } else {
        printf("Error: invalid number\n");
    }


    return 0;
}
