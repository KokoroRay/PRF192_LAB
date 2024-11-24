#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	int n;
	printf("Please input 4-digit positive integer: ");
	scanf("%d", &n);
	if (n >= 1111 && n <= 9999) {
		int thousands = n / 1000;
	  	int hundreds = (n % 1000) / 100;
	  	int tens = (n % 100) / 10;
	  	int units = n % 10;
	
	  	printf("Thousands: %d\n", thousands);
	  	printf("Hundreds: %d\n", hundreds);
	  	printf("Tens: %d\n", tens);
	 	printf("Units: %d\n", units);
	}
	else
		printf("Accept integer from 1000 to 9999 only!");
	return 0;
}