#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double n;
    printf("Please enter the radius the circle: ");
    scanf("%lf", &n);
    if (n <= 0) {
        printf("The radius must be a positive number!");
    } else {
        printf("The perimeter of the circle is %lf\n", 2 * M_PI  * n);
        printf("The area of the circle is %lf", M_PI * n * n);
    }
    return 0;
}
