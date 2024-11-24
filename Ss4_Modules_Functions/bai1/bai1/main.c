#include <stdio.h>
#include <stdlib.h>
#include "Ex01Lib.h"

int main()
{
    float r, h;
    float totalSurfaceArea, Volume;
    printf("Please enter the base's radius of the cylinder:");
    scanf("%f", &r);
    printf("Please enter the hight of the cylinder");
    scanf("%f", &h);
    if (r < 0 || h < 0) {
        printf("The hight and radius of cylinder  must be a positive number!");
    }
    else {
        totalSurfaceArea = h * perimeterOfCircle(r) + 2 * areaOfCircle(r);
        Volume = h * areaOfCircle(r);
        printf("The total surface are of the cylinder is %f\n", totalSurfaceArea);
        printf("The volume of the cylinder is %f", Volume);
    }



    return 0;
}
