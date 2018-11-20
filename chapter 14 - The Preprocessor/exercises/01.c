/************************************************************************
Write parameterized macros that compute the following values.
(a) The cube of x.
(b) The remainder when n is divided 4.
(c) 1 if the product of x and y is less than 100, 0 otherwise.
*************************************************************************/

#include <stdio.h>

#define CUBE(x) ((x) * (x) * (x))
#define REMAINDER(n) ((n) % 4)
#define PRODUCT(x,y) (((x)*(y))<(100)?(1):(0))

int main(void) {

    // (a)
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Cube of %d is %d\n\n", num, CUBE(num));

    // (b)
    int n = 18;
    printf("Remainder of %d divided by 4: %d\n\n", n, REMAINDER(n));

    //(c)
    int x, y;
    printf("Enter two integers ");
    scanf("%d %d", &x, &y);
    printf("%d * %d < 100?: %d\n\n", x, y, PRODUCT(x,y));

    return 0;
}
