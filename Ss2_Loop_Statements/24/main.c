#include <stdio.h>
#include <stdlib.h>
#include "reversed_number.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int t;
	unsigned long long int n;
	printf("Please enter the positive integer N: ");
	scanf("%lld ", &n);
	if (n > 0) {
		t = reverse_number(n);
		printf("The reverse number of %lld is %lld", n, t);
		
	}
	else 
		printf("N must greater than or equal 0!");
	return 0;
}