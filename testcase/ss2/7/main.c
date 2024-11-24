#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum =0;
    printf("Please enter positive integer N:");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Accept positive number only!");
    } else if (n == 1) {
        printf("The sum is S = 1");
    } else {
        printf("The sum is S = 1");
        for (int i = 2; i <= n; i++) {
            printf(" + %d", i);
            sum += i;
        }
        printf(" = %d", sum + 1);
    }
    return 0;
}
