#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Please enter the edge of the square: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("The edge must be a positive number!");
    }
    else {
        printf("The perimeter of the square is %d\n", 4*n);
        printf("The area of the square is %d", n * n);
    }
    return 0;
}
