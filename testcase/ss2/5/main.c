#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("How many positive old number that you want to display?");
    scanf("%d", &n);
    if (n == 1 || n == 2) {
        printf("1");
    } else if (n >= 3){
        printf("1");
        for (int i = 2; i <= n; i++) {
            if (i % 2 ==1) {
                printf(", %d", i);
            }
        }
    } else {
    printf("Accept positive number only!");
    }
    return 0;
}
