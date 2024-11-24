#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int  a, b;
	printf("Please input any integer: ");
	scanf("%d", &a);
	b = a % 2;
	printf("The remainer of %d divied by 2 is: %d", a, b);
	return 0;
}