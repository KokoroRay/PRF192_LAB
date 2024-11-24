#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, sum;
	printf("Please enter positive integer N: ");
	scanf("%d", &n);
	for (int i = 1; i < n; i++){
		if (n % i == 0)
			sum += i;
	}
	if (sum == 1)
		printf("%d is a prime number", n);
	else 
		printf("%d is not a prime number", n);

	return 0;
}