/************************************************************************************************
Write a program that asks the user for a 12-hour time, then displays the time in 24-hour form:
See Programming Project 8 for a description of the input format.
*************************************************************************************************/

#include <stdio.h>
#include <ctype.h>


int main() {

    int hour, minute;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf("%d :%d %c", &hour, &minute, &ch);

    hour = (hour == 12 ? 0 : hour);
    if(toupper(ch) == 'P')
        hour+= 12;


    printf("Equivalent 24-hour time: %.2d:%.2d", hour, minute);


   // closest_departure = (((toupper(c) == 'p' ? 12 : 0) + hour ) * 60) + minute; //ALTERNATIVE METHOD

    return 0;
}






