/********************************************************************************************************
Modify the program of Programming Project 2 so that it prompts the user to enter the radius of the sphere 
*********************************************************************************************************/

#include <stdio.h>

int main()
{
    int radius;
    printf("\nEnter radius of the sphere: ");
    scanf("%d", &radius);
    int radius_squared = radius * radius * radius;
    printf("Radius: %d meters\n", radius);

    float volume = 4.0 / 3.0 * 3.14 * radius_squared;
    printf("Volume of the sphere: %.2f cubic meters\n\n", volume);

    return(0);
}
