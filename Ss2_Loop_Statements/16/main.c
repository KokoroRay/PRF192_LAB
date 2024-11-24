#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	int count = 0;

	printf("Please enter positive integer N: ");
    scanf("%d", &n);
    if(n > 0) {
    for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
    	count++;
    	}
	}
	printf("The number of divisors of %d is %d", n, count);
	}
	else 
		printf("Accept positive number only!");
	return 0;
}