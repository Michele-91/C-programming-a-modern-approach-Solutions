/* Programming Project 9 in Chapter 5 asked you to write a program that determines which of the two
 * dates comes earlier on the calendar. Generalize the program so that the user may enter any number
 * of dates. The user will enter 0/0/0 to indicate that no more dates will be entered */

#include <stdio.h>


int main()
{

    int d1, d2, m1, m2, y1, y2;

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d /%d /%d", &m1, &d1, &y1);

    while (1) {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d /%d /%d", &m2, &d2, &y2);

        if (d2 == 0 && m2 == 0 && y2 == 0)
            break;
        if (y2 < y1 || (y1 == y2 && m2 < m1) ||
            (y1 == y2 && m1 == m2 && d2 < d1)) {

            d1 = d2;
            m1 = m2;
            y1 = y2;
        }


    return 0;
}






