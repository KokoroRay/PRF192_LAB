#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	printf("Please input first number: ");
	scanf("%d", &a);
	printf("Please input sencond number: ");
	scanf("%d", &b);
	if (a > b)
		printf("comparison results: %d is greater than %d", a, b);
	else if ( a < b)
		printf("comparison results: %d is greater than %d", b, a);		
	else
		printf("comparison results: both numbers are equal");
	return 0;
}