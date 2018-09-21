/**************************************************************************************
Modify Programming Project 8 from Chapter 5 so that the departure times are stored in
an array and the arrival tiems are stored in a second array. (The times are integers,
representing the number of minutes since midnight). The program will use a loop to
search the array of departure times for the one closest to the time entered by the user
**************************************************************************************/

#include <stdio.h>

int main()
{

    int hour, minute, closest_departure;
    int dep[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    int arr[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hour, &minute);

    closest_departure = (hour * 60) + minute;

    printf("Closest departure time is ");
    while(hour >= 0)
    {
        if (dep[0] >= closest_departure && closest_departure <= arr[0]) {
            closest_departure = dep[0];
            printf("8:00 a.m., arriving at 10:16 a.m\n");
            break;
        } else if (dep[1] >= closest_departure && closest_departure <= arr[1]) {
            closest_departure = dep[1];
            printf("9:43 a.m., arriving at 11:52 a.m.\n");
            break;
        } else if (dep[2] >= closest_departure && closest_departure <= arr[2]) {
            closest_departure = dep[2];
            printf("11:19 a.m., arriving at 1:31 p.m.\n");
            break;
        } else if (dep[3] >= closest_departure && closest_departure <= arr[3]) {
            closest_departure = dep[3];
             printf("12:47 p.m., arriving at 3.00 p.m.\n");
             break;
        } else if (dep[4] >= closest_departure && closest_departure <= arr[4]) {
            closest_departure = dep[4];
            printf("2:00 p.m., arriving at 4:08 p.m.\n");
            break;
        } else if (dep[5] >= closest_departure && closest_departure <= arr[5]) {
            closest_departure = dep[5];
            printf("3:45 p.m., arriving at 5:55 p.m.\n");
            break;
        } else if (dep[6] >= closest_departure && closest_departure <= arr[6]) {
            closest_departure = dep[6];
            printf("7:00 p.m., arriving at 9:20 p.m\n");
            break;
        } else if (dep[7] >= closest_departure && closest_departure <= arr[7]) {
            printf("9:45 p.m., arriving at 11:58 a.m\n");
            closest_departure = dep[7];
            break;
        }
    }





  return 0;
}





