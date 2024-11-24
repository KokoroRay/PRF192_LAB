#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	char a[400];
	printf("Please enter integer N: ");
	scanf("%d", &n);
	if (n < 0)
		printf("N must be greater than or equal 0!");
	else {
		itoa(n, a, 2);
	printf("%d = %s\n", n, a);
	}
	return 0;
}