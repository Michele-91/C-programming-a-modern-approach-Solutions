/**********************************************************************
Write the following function: 
void swap(int *p, int *q);

When passed the addresses of two variables, swap should exchange the 
values of the variables: 
swap(&i, &j);
***********************************************************************/

#include <stdio.h>

#define N 5

void swap(int *p, int *q);

int main(void)
{
    int i, j;

    printf("\nEnter two integers: ");
    scanf(" %d %d", &i, &j);

    swap(&i, &j);
    printf("Swapped numbers: %d %d\n", j, i);
}

void swap(int *p, int *q)
{
    int temp;

    temp = *q;
    *q = *p;
    *p = temp;
}
