#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, delta, x1, x2;
    printf("SOLVING QUADRATIC EQUATION A*X^2 + B*X + C = 0 PROGRAM:\n");
    printf("------------------------------------------\n");
    printf("Please enter the coefficients A:");
    scanf("%lf", &a);
    printf("Please enter the coefficients B:");
    scanf("%lf", &b);
    printf("Please enter the coefficients C:");
    scanf("%lf", &c);
    delta = pow(b, 2) - 4 * a * c;
        if (delta == 0) {
        printf("The quadratic equation ");
        (a == 0) ? printf("") : ((a == 1) ? printf("X^2") : ((a < 0) ? printf("-%.0lf^2", a) : printf("%.0lf^2", a)));
        (b > 0 && a > 0) ? printf("+") : ((b < 0) ? printf("-") : printf(""));
        (b == 0) ? printf("") : ((b == 1) ? printf(" %.0lf^X") : ((b < 0) ? printf(" - %.0lf^X", b) : printf(" %.0lf^X", b)));
        (c < 0) ? printf(" - %.0lf = 0", fabs(c)) : printf(" + %.0lf = 0", c);
        printf(" has only one distinct root:\n");
        printf("X1 = X2 = %.2lf", -(b/2*a));
    } else if (delta > 0) {
        x1 = (-b + sqrt(delta)) / 2 * a;
        x2 = (-b - sqrt(delta)) / 2 * a;
        if ( a  == 0) {
        printf("The linear equation ");
        //(a == 0) ? printf("") : ((a == 1) ? printf("X^2") : ((a < 0) ? printf("-%.0lf^2", a) : printf("%.0lf^2", a)));
        (b > 0 && a > 0) ? printf("+") : ((b < 0) ? printf("-") : printf(""));
        (b == 0) ? printf("") : ((b == 1) ? printf(" %.0lf^X") : ((b < 0) ? printf(" - %.0lf^X", b) : printf(" %.0lf^X", b)));
        (c < 0) ? printf(" - %.0lf = 0", fabs(c)) : printf(" + %.0lf = 0", c);
        printf(" has an unique root is X = %.2lf", -(c/b));
        } else {
            printf("The quadratic equation ");
            (a == 0) ? printf("") : ((a == 1) ? printf("X^2 ") : ((a < 0) ? printf("-%.0lf^2 ", a) : printf("%.0lf^2 3", a)));
            (b > 0 && a > 0) ? printf("+") : ((b < 0) ? printf("-") : printf(""));
            (b == 0) ? printf("") : ((b == 1) ? printf(" %.0lf^X") : ((b < 0) ? printf(" %.0lf^X", fabs(b)) : printf(" %.0lf^X", b)));
            (c < 0) ? printf(" - %.0lf = 0", fabs(c)) : printf(" + %.0lf = 0", c);
            printf(" has two roots are: \n");
            printf("X1 = %.2lf and X2 = %.2lf", x1, x2);
        }
    } else {
        printf("The quadratic equation ");
        (a == 0) ? printf("") : ((a == 1) ? printf("X^2") : ((a < 0) ? printf("-%.0lf^2", a) : printf("%.0lf^2", a)));
        (b > 0 && a > 0) ? printf("+") : ((b < 0) ? printf("-") : printf(""));
        (b == 0) ? printf("") : ((b == 1) ? printf(" %.0lf^X") : ((b < 0) ? printf(" - %.0lf^X", b) : printf(" %.0lf^X", b)));
        (c < 0) ? printf(" - %.0lf = 0", fabs(c)) : printf(" + %.0lf = 0", c);
        printf(" has no solution");
    }
    return 0;
}
