#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Please enter dividend ");
    scanf("%d", &n);
    printf("Please enter divisor: ");
    scanf("%d", &m);
    if (m == 0) {
        printf("The divisor can't be zero!");
    } else {
        if (n % m != 0) {
            printf("%d is not a multiple of %d", n, m);
        } else {
            printf("%d is a multiple of %d", n, m);
        }
    }
    return 0;
}
