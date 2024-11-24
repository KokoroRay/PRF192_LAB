#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a, b;
	printf("Please input any alphabet: ");
	scanf("%c", &a);
	if (a > 64 && a < 91) {
		b = a + 32;
		printf("The uppercase of '%c' is '%c'", a, b);
	}
	else
		printf("You must input an alphabet!!!");
	return 0;
}