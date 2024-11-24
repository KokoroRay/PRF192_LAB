#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int n;
	printf("Please enter the positive integer N: ");
	scanf("%d", &n);
	n = n - 2;
	for (int i = 0; i <= n + 1; i++)
	{
		for (int j = n - i; j <= n; j++)
			printf(" ");
		for (int j = i; j <= n; j++)
			printf("* ");
		printf("\n");
	}

	return 0;
}