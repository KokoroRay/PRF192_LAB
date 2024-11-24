#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, thousands, hundreds, tens, unit, total;
	printf("Please input 4-digit positivi integer: ");
	scanf("%d", &n);
	if (n >= 1111 && n <= 9999){
		thousands = n / 1000;
		hundreds = (n % 1000) /100;
		tens = (n % 100) / 10;
		unit = n % 10;

		total = thousands + hundreds + tens + unit;
		printf("Sum all digits of %d is: %d + %d + %d + %d = %d", n, thousands, hundreds, tens, unit, total); 
	}
	else 
		printf("Accept integer from 1000 to 9999 only");
	return 0;
}