#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, total;
	int a[4];
	printf("Please input 4-digit positivi integer: ");
	scanf("%d", &n);
	if (n >= 1000 && n <= 9999){
		a[0] = n / 1000;
		a[1] = (n % 1000) /100;
		a[2] = (n % 100) / 10;
		a[3] = n % 10;
		total = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
		printf("The erverse number of %d is %d", n, total);
	}
	else 
		printf("Accept integer from 1000 to 9999 only!");
	
	return 0;
}