#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, c, t;
	
	printf("Please enter the positive integer N: ");
	scanf("%d", &n);
	if (n > 1 || 18 > n){
		printf("All 2-digit number that the sum of digits of that number equal to %d");
		
		for (c = 1; c <= 9; c++){
			t = n - c;
			if (0 <= t && t <= 9) {
				printf(", %d%d", c, t);
			}
		}
	}
	else
		printf("Don't heve anhy 2-digit number that the sum of digits of that number equal to 0");
		
	return 0;
}