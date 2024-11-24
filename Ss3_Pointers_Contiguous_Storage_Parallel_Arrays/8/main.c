#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	char a[1000];
	printf("Please enter integer N: ");
	scanf("%d", &n);
	itoa(n, a, 16);
	printf("%dd = %sh\n", n, a);
	return 0;
}