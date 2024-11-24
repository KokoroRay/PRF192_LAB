#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("How many positive even number that you want to display? ");
	scanf("%d", &n);
	if (n > 1) {
		for (int i = 0; i <= n; i++)
			if (i % 2 == 0)
				printf("%d ", i);
	}
	else 
		printf("Accept positive number only!");
	return 0;
}