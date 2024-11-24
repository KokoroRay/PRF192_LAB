#include <stdio.h>
#include <stdlib.h>

int main()
{
    int date, month, year;
    printf("Please enter any date in mm/dd//yyyy format:");
    scanf("%d/%d/%d", &month, &date, &year);
    if (date <= 0 || date > 31) {
        printf("Input error: The value of date must be from 1 to 31.");
    } else if (month <= 0 || month > 12) {
        printf("Input error: The value of month must be from 1 to 12,");
    } else if (year <= 0) {
        printf("Input error: The value of full year must be a positive integer.");
    } else {
        switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (date > 31) {
                printf("%d/%d/%d is an invalid date", month, date, year);
            } else {
                printf("%d/%d/%d is a valid date", month, date, year);
            }
            break;
        case 4: case 6: case 9: case 11:
            if (date > 30) {
                printf("%d/%d/%d is an invalid date", month, date, year);
            } else {
                printf("%d/%d/%d is a valid date", month, date, year);
            }
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
             if (date > 29) {
                printf("%d/%d/%d is an invalid date", month, date, year);
             } else {
                printf("%d/%d/%d is a valid date", month, date, year);
             }
            } else {
                if (date > 28) {
                    printf("%d/%d/%d is an invalid date", month, date, year);
                } else {
                    printf("%d/%d/%d is a valid date", month, date, year);
                }
            }
            break;
        }
    }
    return 0;
}
