/******************************************************************
Write a program that prompts the user to enter two dates and then
indicates which date comes earlier on the calendar 
*******************************************************************/

#include <stdio.h>

int main(void) {

    int month1, month2, day1, day2, year1, year2;

    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &month2, &day2, &year2);

      if ((year1 > year2) || 
          (year1 == year2 && month1 > month2) ||
          (year1 == year2 && month1 == month2 && day1 > day2))
      {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
               month1, day1, year1, month2, day2, year2);
      } else if (year1 == year2 && month1 == month2 && day1 == day2) {
            printf("You entered the same date twice\n");
      } else {
          printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n",
                    month2, day2, year2, month1, day1, year1);
        }
          
    return 0;
}
