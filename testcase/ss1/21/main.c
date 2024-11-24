#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Please enter the order of ASCII character: ");
    scanf("%d", &n);
    if (n <= 0 || n > 255) {
        printf("The order of ACSII character must be from 0 to 255!");
    } else {
        printf("The %dth ASCII character is '%c'", n, n);
    }
    return 0;
}
