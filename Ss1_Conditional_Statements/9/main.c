#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float h, r, pb, ab, tsa, v;
	printf("Please input the base's and height reidus of the cylinder: ");
	scanf("%f %f", &r, &h);
	if (r && h > 0) {
		pb = 2.0 * M_PI * r;
		ab = M_PI * r * r;
		tsa = h * pb + 2.0 * ab;
		v = h * ab;
		printf("THe total surface area of the cylinder is %0.10f\n", tsa);
		printf("The volume of the cylinder is %.10f", v);
	}
	else
	printf("The hight and redius of cylinder must be a positive number!");
	return 0;
}