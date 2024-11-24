#include <stdio.h>
#include <stdlib.h>

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
        printf("Sum all digits of %d is %d + %d + %d + %d = %d", n, thous, hund, tens, unit, thous + hund + tens + unit);
    }
    return 0;
}
