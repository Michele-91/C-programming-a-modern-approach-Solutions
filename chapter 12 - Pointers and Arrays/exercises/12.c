/***************************************************************************
Write the following function:
void find_two_largest(const int *a, int n, int *largest,
                      int *second_largest);

a points to an array of length n. The function searches the array for 
its largest and second largest elements, storing them in variables 
pointed to by largest and second_largest, respectively. 
Use pointer arithmetic--not subscripting--to visit array elements.
***************************************************************************/

#include <stdio.h>

#define N 5

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void)
{
    int a[N];
    int *p, largest = 0, second_largest = 0;

    printf("\nEnter %d values: ", N);
    for(p = a; p < a + N; p++)
        scanf(" %d", p);

    find_two_largest(a, N, &largest, &second_largest);

    printf("Largest number: %d\nSecond largest number: %d\n", largest, second_largest);

}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    const int *p;

    for(p = a; p < a + n; p++)
    {
        if(*p > *largest)
        {
            *second_largest = *largest;
            *largest = *p;
        }
    }
}
