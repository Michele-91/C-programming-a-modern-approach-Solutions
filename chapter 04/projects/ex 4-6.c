/* Rewrite the upc.c program of Section 4.1 so that the user enter 11 digits at one time,
 * instead of entering one digit, then five digits, and then another five digits   */

#include <stdio.h>

int main()
{
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, first_sum, second_sum, total;

    printf("Enter the first 11 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &i1, &i2, &i3, &i4, &i5, &i6, &i7, &i8, &i9, &i10, &i11, &i12);

    first_sum = i2 + i4 + i6 + i8 + i10 + i12;
    second_sum = i1 + i3 + i5 + i7 + i9 + i11;
    total = 3 * first_sum + second_sum;
    //total = 3 * (i2 + i4 + i6 + i8 + i10 + i12) + (i1 + i3 + i5 + i7 + i9 + i11);
    printf("Check digit: %d\n", 9 - ((total - 1) % 10));


    return 0;
}
