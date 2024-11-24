#include <stdio.h>
#include <stdlib.h>
#include "Ex03Lib.h"

int main(){
    printf("All perfect number that smaller than 1000 are:");
    for (int i = 6; i <= 1000; i++) {
        if (sumDivisorsOf(i) == sumRealDivisorsOf(i)) {
            printf(" %d", i);
        }

    }

    return 0;
}
