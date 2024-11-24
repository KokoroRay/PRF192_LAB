#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c, d;
	printf("Please input diviend and divisor: ");
	scanf("%d %d", &a, &b);
	if (a && b > 0) {
	c = a / b;
	d = a % b;
	printf("The quotient of %d divided by %d is %d\n", a, b, c);
	printf("The remainder of %d divided by %d is %d", a, b, d);
	}
	else 
	printf("The divisorr can't be zero");	
	return 0;
}