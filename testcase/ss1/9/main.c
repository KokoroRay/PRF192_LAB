#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double r, h;
    printf("Please enter the bas
           e's radius of the cylinder:");
    scanf("%lf", &r);
    printf("Please enter the hight of the cylinder: ");
    scanf("%lf", &h);
    if (r <= 0|| h <= 0) {
        printf("The hight and radius of cylinder must be a positive number!");
    } else {
        double pb = 2 * M_PI * r;
        double ab = M_PI * r * r;
        printf("The total surface area of the cylinder is %lf\n", h * pb + 2 * ab);
        printf("The volume of the cylinder is %lf", h * ab);
    }
    return 0;
}
