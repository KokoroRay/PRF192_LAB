#include <stdio.h>
#include <stdlib.h>
#include "Ex06Lib.h"

int main()
{
    int day, month, year;
    printf("Please enter nay date in yyyy-mm-dd format:");
    scanf("%d %d %d", &year, &month, &day);
    if (day > 31 || day < 0 || month < 0 || month > 12) {
        printf("Input error: The value of date must be from 1 to 31.");
    }
    else {
        printf("%d-%d-%d is ", year, month, day);
        if (datesOfMonth(year, (month - 1)) >= day) {
            printf("a valid date");
        }
        else {
            printf("an invalid date");
        }
    }
    return 0;
}
