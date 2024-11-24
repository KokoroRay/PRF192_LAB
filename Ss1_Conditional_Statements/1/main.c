#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	printf("Plase input your value: ");
	scanf("%d", &a);
	if (a > 0)
		printf("%d is a positive number", a);
	else if (a < 0)
		printf("%d is a negative number", a);
	else
		printf("The number enter is zero");
	
	return 0;
}