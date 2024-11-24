#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, sum;
	printf("Please enter positive integer N: ");
	scanf("%d", &n);
	if (n > 0) {
		for (int i = 1; i <= n - 1; i++){
			if (n % i == 0){
				sum += i;
			}
		}
		if (n == sum)
			printf("%d is a perfect number", n);
		else
			printf("%d is not perfect number", n);
	}
	else 
		printf("Accept positive number only!");
	return 0;
}