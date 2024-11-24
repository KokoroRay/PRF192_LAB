#include <stdio.h>
#include <stdlib.h>
#include "Ex04Lib.h"

int main()
{
    int a, b;
    printf("Please enter the lower bound A:");
    scanf("%d", &a);
    printf("Please enter the upper bound B:");
    scanf("%d", &b);
    if ( a < 0) {
        printf("The lower bound must be a positive integer!");
    }
    else if (a > b) {
        printf("The lower bound must be smaller than or equal the upper bound!");
    }
    else {
        printf("All prime numbers from %d to %d are", a, b);
        for (int i = a; i < b; i++) {
            if (isPrimeNumber(i) == 0 && divisorsCount(i) == 2) {
                printf(" %d", i);
            }
        }
    }

    return 0;
}
