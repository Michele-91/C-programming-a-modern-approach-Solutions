/***************************************************************************
Write the following function:
void split_time(long total_sec, int *hr, int *min, int *sec);

total_sec is a time represented as the number of seconds since midnight. 
hr, min and sec are pointers to variables in which the function will 
store the equivalent time in hours (0-23), minutes (0-59) and seconds 
(0-59), respectively.
***************************************************************************/

#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void)
{
    long total_sec = 33621;
    int hour, minute, second;
    split_time(total_sec, &hour, &minute, &second);
    printf("Seconds elapsed since midnight: %ld\n", total_sec);
    printf("Hour: %d, Minute: %d, Second: %d\n", hour, minute, second);

    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
    *hr = total_sec / 3600;
    total_sec -= *hr * 3600;
    *min = total_sec / 60;
    total_sec -= *min * 60;
    
    /*
    *sec = total_sec;
    *sec = total_sec % 60;
    *min = total_sec / 60 % 60;                    //ALTERNATIVE METHOD
    *hr = total_sec / 60 / 60;
    */
}
