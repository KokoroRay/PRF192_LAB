#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char n;
    printf("Please enter any alphabet:");
    scanf("%c", &n);
    if (isupper(n)) {
        printf("The lowercase of '%c' is '%c'", n, tolower(n));
    } else if (islower(n)) {
        printf("The uppercase of '%c' is '%c'", n, toupper(n));
    } else {
        printf("You must enter any alphabet");
    }
    return 0;
}
