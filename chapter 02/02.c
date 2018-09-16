/*******************************************************************************************************
Write a program the computes the volume of a sphere with a 10-meter-radius, using the formula v = 4/3πr3.
Write the fraction 4/3 as 4.0f / 3.0f.  
********************************************************************************************************/

#include <stdio.h>


int main()
{
    int radius = 10;
    int radius_squared = radius * radius * radius;
    printf("Radius: %d meters\n", radius);

    float volume = 4.0 / 3.0 * 3.14 * radius_squared;
    printf("Volume of the sphere: %.2f cubic meters\n\n", volume);

    return(0);
}
