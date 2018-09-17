/* Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-xxxx
and then displays the number in the form xxx.xxx.xxxx. */

#include <stdio.h>

int main()
{
    int tel_num1, tel_num2, tel_num3;
    printf("\nEnter telephone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &tel_num1, &tel_num2, &tel_num3);
    printf("You entered: %5.3d.%.3d.%.3d\n", tel_num1, tel_num2, tel_num3);

    return 0;
}
