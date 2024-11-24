#include <stdio.h>
#include <stdlib.h>
#include "Ex06Lib.h"

 int isLeapYear(int year) {
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        return  1;
    }
    return  0;
 }


 int datesOfMonth(int year, int month){
    int leapYear[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year) == 1) {
        leapYear[1] = 29;
        return leapYear[month];
    }
    else {
        return leapYear[month];
    }
 }
