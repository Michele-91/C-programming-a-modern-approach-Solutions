/*****************************************************************************************
Write a program that finds the largest and smallest of four integers entered by the user.
******************************************************************************************/

#include <stdio.h>

int main(void) {

    int i1, i2, i3, i4;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);


    if ((i1 > i2) && (i1 > i3) && (i1 > i4)) {
        printf("Largest: %d\n", i1);
    } else if ((i1 < i2) && (i1 < i3) && (i1 < i4)) {
        printf("Smallest: %d\n", i1);
    }


    if (i2 > i1 && i2 > i3 && i2 > i4) {
        printf("Largest: %d\n", i2);
    } else if (i2 < i1 && i2 < i3 && i2 < i4) {
        printf("Smallest: %d\n", i2);
    }


    if (i3 > i1 && i3 > i2 && i3 > i4) {
        printf("Largest: %d\n", i3);
    } else if (i3 < i1 && i3 < i1 && i3 < i4) {
        printf("Smallest: %d\n", i3);
    }


    if (i4 > i1 && i4 > i2 && i4 > i3) {
        printf("Largest: %d\n", i4);
    } else if (i4 < i1 && i4 < i2 && i4 < i3) {
        printf("Smallest %d\n", i4);
    }

    /* SECOND METHOD

    int n1, n2, n3, n4, largest, smallest;

    if (n1 >= n2) {
        largest = n1;
        smallest = n2;
    } else {
        largest = n2;
        smallest = n1;
    }

    if (n3 > largest)
        largest = n3;
    else if (n3 < smallest)
        smallest = n3;
    if (n4 > largest)
        largest = n4;
    else if (n4 < smallest)
        smallest = n4;

     */

    return 0;
}
