#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) { 
	int n;
	float a, s;
	printf("Please enter positive integer N: ");
	scanf("%d", &n);
	if (n > 0) {
		for (int i = 1; i <= n; i++) {
			s = s + 1.0/i;
		}
		printf("The sum is S = %f", s);		
	}
		
	else
		printf("Accept positive number only!!!!");
	return 0;
}