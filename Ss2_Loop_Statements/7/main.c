#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, sum;
	printf("Please input posivive integer N: ");
	scanf("%d", &n);
	if ( n > 0) {
		for (int i = 1; i <= n; i++)
			sum += i;
		printf("The sum is S: %d", sum);
	}
	else 
		printf("Accept positive number only!");
	return 0;
}