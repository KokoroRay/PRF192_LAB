#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, n;
	float a;
	printf("Please enter the base X: ");
	scanf("%d", &n);
	if (n > 0){
		printf("Please enter the exponent N: ");
		scanf("%d", &x);
		a = pow(n, x);
		printf("Result: %d^%d = %f", n, x, a);
	}
	else 
		printf("The exponent N must be greater than or equal 0!");
	return 0;
}