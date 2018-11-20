
/**************************************************************************************
Write the following parameterized macros.

(a) CHECK(x,y,n) - Has the value 1 if both x and y fall between 0 and n-1,
    inclusive.
(b) MEDIAN(x,y,z) - Finds the median of x, y, and z.
(c) CHECK(x) - Computes the polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6.
***************************************************************************************/

#include <stdio.h>

#define CHECK(x, y, n) ((x) >= 0 && (x) <= (n)-1 &&     \
                       (y) >= 0 && (y) <= (n)-1 ? 1 : 0)
#define MEDIAN(x, y, z) ((x) > (y) && (x) < (z) ? (x) : \
                         (y) > (x) && (y) < (z) ? (y) : \
                         (z) > (x) && (z) < (y) ? (z) : \
                         (x) < (y) && (x) > (z) ? (x) : \
                         (y) < (x) && (y) > (z) ? (y) : \
                         (z) < (x) && (z) > (y) ? (z) : (x))
#define POLYNOMIAL(x)  ((3 * ((x) * (x) * (x) * (x) * (x)))         \
                       +(2 * ((x) * (x) * (x) * (x)))               \
                       -(5 * ((x) * (x) * (x)))                     \
                       -((x) * (x)) + (7 * (x)) - 6 )

int main(void) 
{
    int x, y, z, n;
    printf("Enter x, y, z: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Enter n:");
    scanf("%d", &n);

    printf("\n%d and %d fall between 0 and %d-1: %s", x, y, z,
           CHECK(x, y, z) ? "true" : "false");
    printf("\nMedian of %d, %d, %d: %d", x, y, n, MEDIAN(x, y, n));
    printf("\nPolynomial answer for %d: %.0d\n\n", x, POLYNOMIAL(x));

    return 0;
}
