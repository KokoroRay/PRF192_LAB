#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n;
    printf("Please enter any ASCII character: ");
    scanf("%c", &n);
    printf("The order of ASCII character '%c' is %d", n, n);
    return 0;
}
