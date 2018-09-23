
#include <stdio.h>
#include <ctype.h>


int main() {


    int n, i;
    double factorial;
    factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("Factorial: %lf\n", factorial);


    return 0;
}






