#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    long long int count = 1;
    printf("Please enter positive integer N: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("N must be greater than or equal 0!");
    } else {
        if (n == 0) {
            printf("Result: 0! = 1");
        } else if (n == 1) {
            printf("Result: 1! = 1");
        } else{
            printf("Result: %d = 1", n);
            for (int i = 2; i <= n; i++) {
                printf("*%d", i);
            }
            for(int i = 1; i <= n; i++) {
                count *= i;
            }
            printf("\n\t= %lld", count);
        }
    }
    return 0;
}
