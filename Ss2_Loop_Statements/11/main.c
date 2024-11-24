#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, sum = 1;
	printf("Please input positive integer N: ");
	scanf("%d", &n);
	if (n > 0) {
		for (int i = 1; i <= n; i++)
			sum *= i;
		printf("Result: %d! = %d", n, sum);
	}
	else 
		printf("N must be greater than or equal 0!");
	return 0;
}