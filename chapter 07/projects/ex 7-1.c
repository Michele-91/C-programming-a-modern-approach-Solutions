/* Write a program in C to make such a pattern like right angle triangle with number increased by 1 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    short i, n;

    printf("Enter a number: ");
    scanf("%hd", &n);

    for(i = 1; i <= n; i++)
        printf("%10hd%10hd\n", i, i * i);

    return 0;
}






