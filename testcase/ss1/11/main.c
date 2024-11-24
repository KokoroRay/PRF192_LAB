#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Please enter dividend: ");
    scanf("%d", &n);
    printf("Please enter divisor: ");
    scanf("%d", &m);
    if ( n <= 0 || m <= 0) {
        printf("The divisor can't be zero!");
    } else {
        printf("The quotient of %d divided by %d is %d\n", n, m, n/m);
        printf("The remainder of %d divided by %d is %d", n, m, n%m);
    }
    return 0;
}
