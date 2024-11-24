#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int isAmstrong(int n) {
    int a, b, c, amStrong;
        a = (n %1000) / 100;
        b = (n % 100) / 10;
        c = n % 10;
        amStrong = pow(a, 3) + pow(b, 3) + pow(c, 3);
        return amStrong == n;
    return ;
}
