#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	unsigned short int n;
	char a[16];
	printf("Please a 16-bit binary number: ");
	scanf("%x", &n);
	sprintf(a, "%x", n);
	int decimal = strtol(a, NULL, 16);
	printf("Convarsion results: %xb = %dd", n, decimal);
	return 0;
}