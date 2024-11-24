#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("Please input the order of ASCII character: ");
	scanf("%d", &a);
	if ( a >= 0 && a < 256) {
		printf("The %dth ASCII charactor is: '%c'", a, a);
	}
	return 0;
}