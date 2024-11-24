#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    printf("Please enter the width of the rectangle: ");
    scanf("%d", &n);
    printf("Please enter the hight of the rectangle: ");
    scanf("%d", &m);
    if (n <= 0 || m <= 0) {
        printf("The edge of rectangle must be a positive number!");
    } else {
        printf("The perimeter of the rectangle is %d\n", 2 * ( n + m));
        printf("The area of the rectangle is %d", n * m);
    }
    return 0;
}
