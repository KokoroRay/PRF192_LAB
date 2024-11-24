#include <stdio.h>
#include <stdlib.h>

// code by Ray

int main()
{
    int year, month;
    printf("Please enter the full year: ");
    scanf("%d", &year);
    if (year <= 0)
    {
        printf("The value of full year must be a positive integer!");
    }
    else
    {
        printf("Please enter any month of %d:", year);
        scanf("%d", &month);
        if (month <= 0 || month > 12)
        {
            printf("The value of month must be from 1 to 12!");
        }
        else
        {
            switch (month)
            {
            case 1: case 3: case 5: case 7: case 8: case 10:case 12:
                printf("Number of date of %d/%d is 31 dates", month, year);
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                printf("Number of date of %d/%d is 30 dates", month, year);
                break;
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                {
                    printf("Number of date of %d/%d is 29 dates", month, year);
                }
                else
                {
                    printf("Number of date %d/%d is 28 dates", month, year);
                }
            }
        }
    }

    return 0;
}
