#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, thous, hund, tens, unit;
    printf("Please enter 4-digit positive integer: ");
    scanf("%d", &n);
    if (n <= 999 || n >= 10000) {
        printf("Accept integer from 1000 to 9999 only!");
    } else {
        thous = n / 1000;
        hund = (n %1000) / 100;
        tens = (n %100) / 10;
        unit = n % 10;
        printf("The reverse number of %d is %d", n, unit * 1000 + tens * 100 + hund * 10 + thous);
    }
    return 0;
}
