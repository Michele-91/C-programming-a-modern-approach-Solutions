/* Write a program that formats product information entered by the user. A session with the program
should look like this: */

#include <stdio.h>

int main()
{
    int item_number, day, year, month;
    float unit_price;
    printf("Enter item number: ");
    scanf("%d", &item_number);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &month, &day, &year);
   // printf("\nItem\t Unit\t\t Purchase\t\n\t Price\t\t Date\n%d\t $%.2f\t\t %d/%d/%d\n",
   //        item_number, unit_price, month, day, year);
    printf("\nItem\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%.2f\t\t%.2d/%.2d/%.4d\n", item_number, unit_price, month, day, year);


    return 0;
}
