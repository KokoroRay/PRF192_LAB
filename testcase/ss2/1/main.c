#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("How many number that you want to display?");
    scanf("%d", &n);
    if(n <= 0) {
        printf("Accept positive number only!");
    } else {
        printf("That first %d positive integer are:", n);
        printf("1");
        for (int i = 2; i <= n; i++) {
            printf(", %d", i);
        }
    }
    return 0;
}
