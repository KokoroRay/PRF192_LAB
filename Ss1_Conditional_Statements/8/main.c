#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float Area, Permeter, r, pi = 3.141593;
	printf("Please input the radius of the circle: ");
	scanf("%f", &r);
	if (r > 0) {
		Permeter = 2.0 * pi * r;
		Area = pi * r * r;
		printf("The permeter of the circle is %f", Permeter);
		printf("The area of the circle is %f", Area);
		}
	else 
		printf("The radius must be a positive number!");
		
	return 0;
}