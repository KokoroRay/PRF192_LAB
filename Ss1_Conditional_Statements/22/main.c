#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a;
	printf("Please input any character: ");
	scanf("%c", &a);
	printf("The order of ASCII character '%c' is %d", a, a);
	return 0;
}