#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int h, w, a, p;
	printf("Please input hight and wight: ");
	scanf("%d %d", &h, &w);
	if (h || w > 0){
		a = h * w;
		p = 2*(h + w);
		printf("The perimeter of the rectangle: %d", p);
		printf("The area of ther rectangle: %d", a);
	}
	else 
		printf("The edge of rectangle must be a positive number!");
	return 0;
}