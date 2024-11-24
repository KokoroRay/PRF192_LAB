#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, a;
	printf("Please enter positive integer N: ");
	scanf("%d", &n);
	if (n > 0) {
		printf("All divisors of %d are: %d", n);
		for (int i = 1; i <= n; i++){
			if (n % i == 0)
				printf("%d ", i);
			}
	}
	else 
		printf("Accept positive number only!");
	return 0;
}