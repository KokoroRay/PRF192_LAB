#include <stdio.h>
#include <stdlib.h>
#include "Ex07Lib.h"

int main()
{
    int n;
    printf("Please enter positive integer");
    scanf("%d", &n);
    if (n < 0) {
        printf("N must be greater or equal 0!");
    }
    else {
        for (int i = 0; i <= n; i++) {
            printf("%d", F(i));
        }
    }

    return 0;
}
