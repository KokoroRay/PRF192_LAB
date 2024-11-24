#include <stdio.h>
#include "Ex05Lib.h"

long GCD(long a, long b) {
    if (a == 0 || b == 0) {
        return a + b;
    }
    while (a != b) {
        if (a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }

    return a;

}


long LCM(long a, long b) {
	return (a * b) / GCD(a, b);
}
