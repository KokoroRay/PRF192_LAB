#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char n;
    printf("Please enter any alphabet: ");
    scanf("%c", &n);
    if (isdigit(n)) {
        printf("You must enter an alphabet!");
    } else {
        printf("The uppercase of '%c' is '%c'", n, n-32);
    }
    return 0;
}
