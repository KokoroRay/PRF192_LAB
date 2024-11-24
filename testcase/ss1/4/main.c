#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Please enter the first number: ");
    scanf("%d", &n);
    printf("Please enter the second number:");
    scanf("%d", &m);
    if (n > m) {
        printf("Comparison results: %d is greater than %d", n, m);
    } else if (n < m){
        printf("Comparison results: %d is less than %d", n, m);
    } else {
        printf("Comparison results: both number are equal");
    }

    return 0;
}
