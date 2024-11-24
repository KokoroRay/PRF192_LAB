#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s, h, m, sec;
    printf("Please enter the time in seconds: ");
    scanf("%d", &s);
    if (s < 0) {
        printf("Accept positive integer only!");
    } else {
        h = s / 3600;
        m = (s % 3600) / 60;
        sec = s - ((h * 3600) + (m * 60));
        printf("Conversion value: %d seconds = %.2d:%.2d:%.2d", s, h, m, sec);
    }
    return 0;
}
