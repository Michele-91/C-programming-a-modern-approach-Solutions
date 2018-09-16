
#include <stdio.h>
#include <ctype.h>
#define N 10

int main()
{

    int a[N], i;

    printf("Enter %d numbers: ", N);
    for(i = 0; i < N; i++)
        scanf("%d", &a[i]);

    printf("In reverse order: ");
    for(i = N - 1; i >= 0; i--)
        printf("%d ", a[i]);

    //34 82 49 102 7 94 23 11 50 31

    printf("\n");

    return 0;
}






