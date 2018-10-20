/***************************************************************************
Assume that the following array contains a week's worth of hourly 
temperature readings, with each row containing the readings for one day:

int temperatures[7][24];

Write a statement that uses the search function (see Exercise 7) to 
search the entire temperatures array for the value 32.
***************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

bool search(const int a[], int n, int key);

int main(void)
{
    const int temperatures[7][24] = {[3][21] = 32};
    int key = 32;

    if(search(&temperatures[0][0], 7*24, key))
        printf("Key found; access granted\n");
    else
        printf("Key not found; access denied\n");

    return 0;
}

bool search(const int a[], int n, int key)
{
    const int *p;

    for (p = a; p < a + n; p++)
        if (*p == key)
            return true;
        if(*p == key)
            return true;

    return false;
}
