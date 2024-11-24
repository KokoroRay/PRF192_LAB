#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int h, h1, m, m1, s, n;
	printf("Please input the time seconds: ", n);
	scanf("%d", &n);
	if ( n > 0){
		h = n / 3200;
		h1 = n % 3200;
		m = h1 / 60;
		m1 = h1 % 60;
		s = m1 % 60;
		printf("Conversion value: %d seconds = %02d:%02d:%02d",n, h, m, s);
	}
	else 
		printf("Accept positive integer only!!!");
	return 0;
}