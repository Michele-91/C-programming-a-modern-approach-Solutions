/***************************************************************************
Modify Programming Project 8 from Chapter 5 so that it includes the 
following function:
void find_closest_flight(int desired_time,
                        int *departure_time,
                        int *arrival_time);

This function will find the flight whose departure time is closest 
to desired_time (expressed in minutes since midnight). It will store 
the departure and arrival times of this flight (also expressed in minutes 
since midnight) in the variables pointed to by departure_time and 
arrival_time, respectively.
***************************************************************************/

#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(void)
{
    int hour, minute, desired_time, departure_time, arrival_time;

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);

    desired_time = (hour * 60) + minute;
    find_closest_flight(desired_time, &departure_time, &arrival_time);

    printf("Closest departure time is %.2d:%.2d, arriving at %.2d:%.2d\n",
            departure_time / 60, departure_time % 60,
            arrival_time / 60, arrival_time % 60);

    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    int dep1, dep2, dep3, dep4, dep5, dep6, dep7, dep8;

    dep1 = 480; dep2 = 583; dep3 = 679; dep4 = 767;
    dep5 = 840; dep6 = 945; dep7 = 1140; dep8 = 1305;

    int arr1, arr2, arr3, arr4, arr5, arr6, arr7, arr8;
    
    arr1 = 616; arr2 = 712; arr3 = 811; arr4 = 900; 
    arr5 = 968; arr6 = 1075; arr7 = 1280; arr8 = 1438;

    if (dep1 + (dep2 - dep1) / 2 >= desired_time) {
        *departure_time = dep1;
        *arrival_time = arr1;
    } else if (dep2 + (dep3 - dep2) / 2 >= desired_time) {
        *departure_time = dep2;
        *arrival_time = arr2;
    } else if (dep3 + (dep4 - dep3) / 2 >= desired_time) {
        *departure_time = dep3;
        *arrival_time = arr3;
    } else if (dep4 + (dep5 - dep4) / 2 >= desired_time) {
        *departure_time = dep4;
        *arrival_time = arr4;
    } else if (dep5 + (dep6 - dep5) / 2 >= desired_time) {
        *departure_time = dep5;
        *arrival_time = arr5;
    } else if (dep6 + (dep7 - dep6) / 2 >= desired_time) {
        *departure_time = dep6;
        *arrival_time = arr6;
    } else if (dep7 + (dep8 - dep7) / 2 >= desired_time) {
        *departure_time = dep7;
        *arrival_time = arr7;
    } else {
        *departure_time = dep8;
        *arrival_time = arr8;
    }

}
