#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	unsigned long long int s;
	unsigned long long int n;
	printf("Please enter the positive N: ");
	scanf("%d", &n);
	if ( n > 0 && n < 10*10^18) {
		while (n > 0) {
			s += n % 10;
			n /= 10;
		}
		printf("The sum of all digits of %lld = %d", n, s);
	}
	return 0;
}