#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, n2;
	printf("Pleaase enter the positive integer N: ");
	scanf("%d", &n);
	n2 = 2 * n - 1;
	for (int i = 0; i <= n2; i++){
		for (int j = i; j <= n; j++)
			printf(" ");
		for (int j = n-i; j <= n; j++) 
			printf("* ");
		for (int j = i; j <= n2; j++)
			printf(" ");
		for (int j = n2-i; j <= n2; j++) 
			printf("* ");
		
		printf("\n");
	}
	return 0;
}