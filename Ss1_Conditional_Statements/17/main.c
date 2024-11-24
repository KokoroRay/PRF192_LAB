#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, a[4];
    scanf("%d", &n);
    if (n<= 9999 && n >= 1000){
        a[0] = n/1000;
        a[1] = n/100%10;
        a[2] = n/10%10;
        a[3] = n%10;
        if (a[1]==a[2] &&  a[0]==a[3])
            printf("%d is a palindromic number", n);
        else if (a[0]==a[2] && a[1]==a[3])
            printf("%d is a palindromic number", n);
        else if (a[0]==a[1] &&  a[2]==0 && a[3]==0)
            printf("%d is a palindromic number", n);
        else if (a[1]==0 && a[2]==0 && a[3]==0)
            printf("%d is a palindromic number", n);
        else
            printf("%d is not a palindromic number", n);
    }
    else
        printf("Accept integer from 1000 to 9999 only!");
    return 0;
}
