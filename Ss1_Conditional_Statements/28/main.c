#include <stdio.h>

#include "kokorolib.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int year, month, day;
	printf("Please input any date in dd/mm/yyyy: ");
	scanf("%d: %d: %d", &day, &month, &year);
	if ( day < 32 && day > 0 &&
	month < 13 && month > 0 &&
	year > 1) {
		if (days_in_month(year, month) == day)
			printf("%d/%d/%d is an ibvalud date", day, month, year);	
		else
			printf("%d/%d/%d is a valid date", day, month, year);
	}
	else 
		printf("Erorr!!!!!!!!!!")
	return 0;
}