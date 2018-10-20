/***************************************************************************
Write the following function:
bool search(const int a[], int n, int key);

a is an array to be searched, n is the number of elements in the array, 
and key is the search key. search should return true if key matches some 
element of a, and false if it doesn't. Use pointer arithmetic--not 
subscripting--to visit array elements.
***************************************************************************/

#include <stdio.h>

#define N 5

bool search(const int a[], int n, int key);

int main(void)
{
    int a[N], *p, key = 8;

    printf("Enter %d numbers: ", N);
    for(p = a; p < a + N; p++)
        scanf(" %d", p);
    
    if(search(a, N, key))
        printf("Key found; access granted\n");
    else
        printf("Key not found; access denied\n");
    
    return 0;
}

bool search(const int a[], int n, int key)
{
    const int *p;

    for(p = a; p < a + n; p++)
        if(*p == key)
            return true;

    return false;
}
