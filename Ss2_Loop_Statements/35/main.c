#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("Please enter the positive integer N: ");
	scanf("%d", &n);
	for (int i = 1; i <= n;  i++){
		for (int j = 1; j <= n; j++){
			if(j <= i - 1 )
				printf("   ");
			else 
				printf(" * ");
			}
		printf("\n");
	}
	return 0;
}