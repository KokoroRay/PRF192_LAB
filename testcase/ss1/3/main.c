#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n, m;
    printf("Please enter numerator: ");
    scanf("%f", &n);
    printf("Please enter numerator: ");
    scanf("%f", &m);
    if (n == 0|| m == 0) {
        printf("The denominator can't be zero!");
    } else {
        printf("Result: %0.0f / %0.0f = %f", n, m, n/m);
    }
    return 0;
}

