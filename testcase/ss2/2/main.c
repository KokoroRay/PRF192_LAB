#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("All 2-digit positive integers are:\n")
    printf("10");
    for (int i = 11;  i <= 99; i++) {
        printf(", %d", i);
    }
    return 0;
}
