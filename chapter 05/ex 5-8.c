/* Write a program that asks the user to enter a time (expressed in hours and minutes, using the
 * 24-hour clock). The program then displays the departure and arrival times for the flight whose
 departure times is closest to that entered by the user*/

#include <stdio.h>

int main(void) {

    int hour, minute, closest_departure;
    int dep1, dep2, dep3, dep4, dep5, dep6, dep7, dep8;

    dep1 = 480; dep2 = 583; dep3 = 679; dep4 = 767;
    dep5 = 840; dep6 = 945; dep7 = 1140; dep8 = 1305;

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);

    closest_departure = (hour * 60) + minute;

      if (dep1 >= closest_departure) {
        closest_departure = dep1;
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m\n");
    } else if (dep2 >= closest_departure) {
        closest_departure = dep2;
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    } else if (dep3 >= closest_departure) {
        closest_departure = dep3;
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    } else if (dep4 >= closest_departure) {
        closest_departure = dep4;
         printf("Closest departure time is 12:47 p.m., arriving at 3.00 p.m.\n");
    } else if (dep5 >= closest_departure) {
        closest_departure = dep5;
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    } else if (dep6 >= closest_departure) {
        closest_departure = dep6;
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    } else if (dep7 >= closest_departure) {
        closest_departure = dep7;
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m\n");
    } else if (dep8 >= closest_departure) {
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 a.m\n");
        closest_departure = dep8;
    }


    /* SECONDO MODO ***********************************************************

        if (closest_departure >= 0 && closest_departure <= dep1) {
        closest_departure = dep1;
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m\n");
    } else if (closest_departure >= dep1 && closest_departure <= dep2) {
        closest_departure = dep2;
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    } else if (closest_departure >= dep2 && closest_departure <= dep3) {
        closest_departure = dep3;
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    } else if (closest_departure >= dep3 && closest_departure <= dep4) {
        closest_departure = dep4;
         printf("Closest departure time is 12:47 p.m., arriving at 3.00 p.m.\n");
    } else if (closest_departure >= dep4 && closest_departure <= dep5) {
        closest_departure = dep5;
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    } else if (closest_departure >= dep5 && closest_departure <= dep6) {
        closest_departure = dep6;
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m");
    } else if (closest_departure >= dep6 && closest_departure <= dep7) {
        closest_departure = dep7;
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m\n");
    } else if (closest_departure >= dep7 && closest_departure <= dep8) {
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 a.m\n");
        closest_departure = dep8;
    }
    ***************************************************************************/

    return 0;
}
