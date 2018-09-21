/* Write a program that asks the user to enter a wind speed (in knots), then displays the corresponding
 * description.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main() {

    int knots;

    printf("Enter a wind speed: ");
    scanf("%d", &knots);

    if (knots > 63) {
        printf("Hurricane\n");
    } else if (knots >= 48 && knots <= 63) {
        printf("Storm\n");
    } else if (knots >= 28 && knots <= 47) {
        printf("Gale\n");
    } else if (knots >= 4 && knots <= 27) {
        printf("Breeze\n");
    } else if (knots >= 1 && knots <= 3) {
        printf("Light air\n");
    } else if (knots < 1 ) {
        printf("Calm\n");
    }

    /*SECONDO MODO
    if (knots < 1) {
        printf("Calm\n");
    } else if (knots <= 3) {
        printf("Light air\n");
    } else if (knots <= 27) {
        printf("Breeze\n");
    } else if (knots <= 47) {
        printf("Gale\n");
    } else if (knots <= 63) {
        printf("Storm\n");
    } else {
        printf("Hurricane");
    }
    */


    return 0;
}
