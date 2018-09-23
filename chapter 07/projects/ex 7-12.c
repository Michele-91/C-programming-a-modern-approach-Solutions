
#include <stdio.h>
#include <ctype.h>


int main()
{

    double n = 0.0;
    double total = 0.0;
    char c;

    printf("Enter an expression: ");
    scanf("%lf", &total);
    while((c = getchar()) != '\n')
    {
        switch(c)
        {
            case '+':
            scanf("%lf", &n);
            total += n; break;
            case '-':
            scanf("%lf", &n);
            total -= n; break;
            case '*':
            scanf("%lf", &n);
            total *= n; break;
            case '/':
            scanf("%lf", &n);
            total /= n; break;
        }

    }

    printf("Value of expression: %.2f\n", total);


    return 0;
}






