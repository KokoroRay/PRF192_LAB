#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a, squareRoot;
	printf("Plase input a value: ", a);
	scanf("%lf", &a);
	if (a > 0){
		squareRoot = sqrt(a);
		printf("Square root of %lf is %lf", a, squareRoot);
	}
	else if (a < 0) 
		printf("Accept positive number only");
	return 0;
}