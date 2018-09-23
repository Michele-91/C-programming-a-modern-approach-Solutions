
#include <stdio.h>
#include <ctype.h>


int main() {

    int hour, minute, closest_departure;
    int dep1, dep2, dep3, dep4, dep5, dep6, dep7, dep8;
    char c;

    dep1 = 480; dep2 = 583; dep3 = 679; dep4 = 767;
    dep5 = 840; dep6 = 945; dep7 = 1140; dep8 = 1305;

    printf("Enter a 12-hour time: ");
    scanf("%d :%d%c", &hour, &minute, &c);


    closest_departure = (((toupper(c) == 'p' ? 12 : 0) + hour ) * 60) + minute;

      if (closest_departure >= 0 && closest_departure <= dep1)
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m\n");
      else if (closest_departure >= dep1 && closest_departure <= dep2)
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
      else if (closest_departure >= dep2 && closest_departure <= dep3)
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
      else if (closest_departure >= dep3 && closest_departure <= dep4)
         printf("Closest departure time is 12:47 p.m., arriving at 3.00 p.m.\n");
      else if (closest_departure >= dep4 && closest_departure <= dep5)
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
      else if (closest_departure >= dep5 && closest_departure <= dep6)
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m");
      else if (closest_departure >= dep6 && closest_departure <= dep7)
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m\n");
      else if (closest_departure >= dep7 && closest_departure <= dep8)
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 a.m\n");








    return 0;
}






