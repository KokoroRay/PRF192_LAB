#include <stdio.h>
#include <stdlib.h>

int main()
{
    double fir, sec, thr;
    printf("Please enter the first edge of triangle: ");
    scanf("%lf", &fir);
    printf("Please enter the second edge of triangle: ");
    scanf("%lf", &sec);
    printf("Please enter the three edge of triangle: ");
    scanf("%lf", &thr);
    if (fir <= 0 || sec <= 0 || thr <= 0) {
        printf("These three numbers must be a positive number!");
    } else {
        double p = (fir + sec + thr) / 2;
        printf("The perimeter of the triangle is %0.0lf\n", fir + sec + thr);
        printf("The area of the triangle is %lf", sqrt(p * ( p - fir) * (p - sec) * (p - thr)));
    }

    return 0;
}
