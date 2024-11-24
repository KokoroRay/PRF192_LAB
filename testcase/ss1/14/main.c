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
        printf("The value of thousands is %d\n", thous);
        printf("The value of hundreds is %d\n", hund);
        printf("The value of tens is %d\n", tens);
        printf("The value of unit is %d", unit);
    }
    return 0;
}
