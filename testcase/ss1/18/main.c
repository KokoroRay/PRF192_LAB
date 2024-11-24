#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n;
    printf("Please enter the amount of Vietnam dong:");
    scanf("%lf", &n);
    if (n <= 0) {
        printf("Accept positive integer only");
    } else {
        printf("Conversion value: %.3lf VND = $%0.4lf", n, n / 23.20723);
    }
     return 0;
}
