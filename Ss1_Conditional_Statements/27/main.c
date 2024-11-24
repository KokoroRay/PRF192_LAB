#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int year, month;
	printf("Please input the full year: ");
	scanf("%d", &year);
	if(year > 0) {
		printf("Plase input any month: ");
		scanf("%d", &month);
		if (month > 0 && month < 13){
			printf("Number of date of %d/%d is %d dates",days_in_month(year, month), month, year);
		}
		else 
			printf("The value of month must be from 1 to 12!");
	}
	else 
		printf("The value of full must be a positive integer!");
	
	return 0;
}