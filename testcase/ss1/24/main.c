#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char n;
    printf("Please enter any uppercase alphabet:");
    scanf("%c", &n);
    if (isupper(n)) {
        printf("The lowercase of '%c' is '%c'", n, tolower(n));
    } else {
        printf("You must enter an uppercase alphabet!");
    }
    return 0;
}
