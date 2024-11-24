#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float m, d;
	printf("Please input the amount of Vietnam dong: ");
	scanf("%f", &m);
	if (m > 0){
		d = m / 23.20723;
		printf("Conversion value: %f VND = $%f", m, d);
	}
	else 
		printf("Accept positive integer only!");
	return 0;
}