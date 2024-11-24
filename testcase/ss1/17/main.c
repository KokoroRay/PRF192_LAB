#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, thous, hund, unit, tens;
    printf("Please enter 4-digit positive integer: ");
    scanf("%d", &n);
    if (n <= 999 || n >= 10000) {
            printf("Accept integer from 1000 to 9999 only!");
    } else {
        thous = n % 1000;
        hund = (n % 1000) / 100;
        tens = (n % 100) / 10;
        unit = n % 10;

        if (thous == unit && hund == tens) {
            printf("%d is a palindromic number", n);
        } else if (unit == 0 && thous == tens) {
            printf("%d is a palindromic number", n);
        } else if (thous == hund && unit == 0 && tens == 0) {
            printf("%d is a palindromic number", n);
        } else if (hund == 0 && tens == 0 && unit == 0) {
            printf("%d is a palindromic number", n);
        } else {
            printf("%d is not a palindromic number", n);
        }
    }
    return 0;
}
