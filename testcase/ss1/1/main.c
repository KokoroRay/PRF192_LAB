#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Please enter any integer: ");
    scanf("%d", &n);
    if (n > 0) {
        printf("%d is a positive number", n);
    } else if (n < 0) {
        printf("%d is a negative number", n);
    }
    else {
        printf("The number entered is zero");
    }
    return 0;
}
