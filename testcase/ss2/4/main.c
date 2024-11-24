#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("How many positive even number that you want to display?");
    scanf("%d", &n);
    if (n == 2 || n == 3) {
        printf("2");
    } else if (n >= 4){
        printf("2");
        for (int i = 3; i <= n; i++) {
            if (i % 2 ==0) {
                printf(", %d", i);
            }
        }
    } else {
    printf("Accept positive number only!");
    }
    return 0;
}
