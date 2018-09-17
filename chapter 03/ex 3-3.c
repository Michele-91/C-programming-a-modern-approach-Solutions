/* **********************************************************
Write a program that breaks down an ISBN entered by the user 
**************************************************************/

#include <stdio.h>

int main()
{
    int GSI, group_identifier, publisher_code, item_number, check_digit;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d",
          &GSI, &group_identifier, &publisher_code, &item_number, &check_digit);
    printf("\nGSI prefix: %.3d\n", GSI);
    printf("Group identifier: %.1d\n", group_identifier);
    printf("Publisher code: %5.3d\n", publisher_code);
    printf("Item number: %7.5d\n", item_number);
    printf("Check digit: %d\n\n", check_digit);


    return 0;
}
