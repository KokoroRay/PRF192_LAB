#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	printf("Please input dividend and divisor: ");
	scanf("%d %d", &a, &b);
	if ( a && b > 0){
		if (a % b == 0)
			printf("%d is a multiple of %d", a, b);
		else 
			printf("%d is not multiple of %d", a, b);
	}
	else 
		printf("The divisor can't be zero!");
	
	return 0;
}