/*****************************************************************************************
European countries use a 13-digit code, known as European Article Number (EAN) instead of
the 12-digit Universal Product Code (UPC) found in North America. Each EAN ends with a 
check digit, just as a UPC does.
******************************************************************************************/

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
    //total = 3 * (i2 + i4 + i6 + i8 + i10 + i12) + (i1 + i3 + i5 + i7 + i9 + i11); //OTHER METHOD
    printf("Check digit: %d\n", 9 - ((total - 1) % 10));

    return 0;
}
