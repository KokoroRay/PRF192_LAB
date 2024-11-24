#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("Please input dividend: ");
	scanf("%d", &a);
	if (a % 2 == 0)
		printf("%d is an even number", a);
	else 
		printf("%d is an odd number", a);

	
	return 0;
}