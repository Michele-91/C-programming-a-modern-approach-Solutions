#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d / %d / %d", &month, &day, &year);
    printf("You entered the date %d%d%d", year, month, day);


    return 0;
}
