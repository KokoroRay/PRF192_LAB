#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n;
    printf("Please enter any number: ");
    scanf("%lf", &n);
    if (n < 0) {
        printf("Accept positive number only!");
    }
    else {
        printf("Square root of  %lf is %lf",n,  sqrt(n) );
    }

    return 0;
}
