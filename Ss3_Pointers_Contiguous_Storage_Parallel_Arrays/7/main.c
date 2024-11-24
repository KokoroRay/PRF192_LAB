#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	char a[16];
	printf("Please enter integer N: ");
	scanf("%d", &n);
	itoa(n, a, 2);
	printf("%dd = %sb\n", n, a);
	return 0;
}