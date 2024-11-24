#include <stdio.h>
#include "Ex03Lib.h"

int sumDivisorsOf(int n) {
    int sumD;
    for (int i = 1; i <= n; i++) {
        sumD = 1;
        if (n % i == 0) {
            sumD = n;
        }
    }

  return sumD;
}

int sumRealDivisorsOf(int n) {
    int sumR = 1;
    for (int j = 2; j < n; j++) {
        if(n % j == 0) {
            sumR += j;
        }
    }

  return sumR;
}

int isPerfectNumber(int n) {
    if (sumDivisorsOf == sumRealDivisorsOf){
        return sumDivisorsOf;
    }

}
