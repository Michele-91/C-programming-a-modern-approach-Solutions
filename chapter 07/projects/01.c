/*************************************************************************************************
The square2.c program of Section 6.3 will fail (usually by printing strange answers) if i * i 
exceeds the maximum int value.
Run the program and determine the smallest value of n that causesfailure. Try changing the type 
of i to short and running the program again. (Don't forget to update the conversion specifications 
in the call of printf!) Then try long. From these experiments, what can you conclude about the 
number of bits used to store integer types on your machine? 
**************************************************************************************************/

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






