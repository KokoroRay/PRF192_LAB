#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Please enter dividend: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("%d is a even number",n);
    } else {
        printf("%d is a old number", n);
    }
    return 0;
}
