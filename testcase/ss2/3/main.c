#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("All 3-digit negative integers are:\n");
    printf("-999");
    for(int i = -998; i <= -100; i++) {
        printf(", %d", i);
    }
    return 0;
}
