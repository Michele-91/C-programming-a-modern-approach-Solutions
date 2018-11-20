/********************************************************************************
Write a macro NELEMS(a) that computes the number of elements in 
a one-dimensional array a. Hint: See the discussion of the sizeof operator in 
Section 8.1.
*********************************************************************************/

#include <stdio.h>

#define NELEMS(a) ((int)(sizeof(a) / sizeof(a[0])))

int main(void) {

    int a[20];
    printf("%d\n", NELEMS(a));
    return 0;
    
}
