#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Please enter any integer: ");
    scanf("%d", &n);
    printf("The quotient of %d divided by 2 is %d\n", n, n/2);
    printf("The remainder of %d divided by 2 is %d", n , n%2);

    return 0;
}
