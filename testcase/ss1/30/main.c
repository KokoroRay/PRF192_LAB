#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n, m;
    printf("SOLVING LINEAR EQUATION A*X + B = 0 PROGRAM:\n");
    printf("------------------------------------------\n");
    printf("Please enter the coefficients A:");
    scanf("%lf", &n);
    printf("Please enter the coefficients B:");
    scanf("%lf", &m);
    if (n == 0 && m == 0) {
        printf("Every value for X is a solution to the linear equation 0*X + 0 = 0");
    } else if (n == 0) {
        printf("There is no solution for the linear equation 0*X + %.0lf = 0", m);
    } else {
        printf("The linear equation %.0lf*X + %.0lf = 0 has an unique root is X = %.2lf", n, m, -m/n);
    }
    return 0;
}
