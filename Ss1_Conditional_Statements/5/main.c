#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, perimeter, area;
	printf("Please input the edge of the square ");
	scanf("%d", &a);
	if (a > 0){
		perimeter = 4 * a;
		area = a * a;
		printf("The perimeter of the square is: %d\n", perimeter);
		printf("Ther area of the square is: %d\n", area);
	}
	printf("The edge must be a positive number!\n");
	return 0;
}