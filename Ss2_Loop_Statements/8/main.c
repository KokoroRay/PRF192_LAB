#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumAll(int n) {
	int sum = 0;
	for (int i = 0; i <= n; i++){
		if (i % 2 != 0)
			sum += i;
		else 
			sum -= i;
	}
	return sum;
}

int main(int argc, char *argv[]) {
	int n;
	printf("Please Input positive integer N: ");
	scanf("%d", &n);
	if (n > 0) {
		int sum = sumAll(n);
		printf("The sum is S = %d", sum);
	}
	else 
		printf("Accept positive number only!!");
	return 0;
}
