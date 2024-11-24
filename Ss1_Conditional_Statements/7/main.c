#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a, b, c, p, area, pe;
	printf("Input for a, b and c");
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a && b && c > 0) {
		p = a + b + c;
		pe = p / 2;
		area = sqrt(pe*(pe-a)*(pe-b)*(pe-c));
			if (area > 1){
				printf("The perimeter of the triangle is %lf\n", p);
				printf("The are of ther triangle is %lf", area);
				}
			else 
			printf("These three numbers do not make a triangle!");
		}
		else 
		printf("These three number must be a positive number!");	

	return 0;
}