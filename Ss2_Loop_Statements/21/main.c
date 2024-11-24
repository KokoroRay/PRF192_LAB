#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int gcd(int a, int b) {
	if (b == 0)
		return a;
	else {
		return gcd(b, a % b);
	}
}

int lmc(int a, int b){
	return (a * b) / gcd(a, b);
}


int main(int argc, char *argv[]) {
	int a, b;
	printf("Please enter the positive integer A: ");
	scanf("%d", &a);
	if ( a > 0){
		printf("Please enter the positive integer B: ");
		scanf("%d", &b);
		
		printf("The greatest common divisor of %d and %d is: %d\n", a, b, gcd(a, b));
		printf("The least common multiple of %d and %d is: %d", a, b, lmc(a, b));
	}
	else 
		printf("A and B must be greater than or equal )!");
	return 0;
}