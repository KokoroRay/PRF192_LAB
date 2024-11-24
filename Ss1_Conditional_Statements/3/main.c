#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float m, n, a;
	printf("Please input numerator and donominator ");
	scanf("%f %f", &m,&n);
	if ( m && n != 0)
	{
		a = m / n;
		printf("Result: %f", a);
	}
	else
		printf("The demoiantor can't be zero");
	return 0;
}