/******************************************************************************** 
Write a program that prompts the user to enter a number n, then prints all even 
squares between 1 and n 
*********************************************************************************/

#include <stdio.h>


int main()
{

    int n, i;

    printf("\nEnter limit on maximum square: ");
    scanf("%d", &n);

    for (i = 2; i * i <= n; i += 2) {
            printf("%d\n", i * i);
    }

  return 0;
}






