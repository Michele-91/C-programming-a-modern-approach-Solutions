
#include <stdio.h>
#include <ctype.h>


int main() {

    int hour, minute;
    //char ch;
    char c;

    printf("Enter a 12-hour time: ");
    scanf("%d :%d %c", &hour, &minute, &c);

    hour = (hour == 12 ? 0 : hour);
    if(toupper(c) == 'P')
        hour+= 12;


    printf("Equivalent 24-hour time: %.2d:%.2d", hour, minute);


   // closest_departure = (((toupper(c) == 'p' ? 12 : 0) + hour ) * 60) + minute;



    return 0;
}






