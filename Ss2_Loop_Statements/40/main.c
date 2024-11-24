#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int w, h;
	printf("Please enter the width W: ");
	scanf("%d", &w);
	printf("Please enter the hight H: ");
	scanf("%d", &h);
	printf("The rectangle which size is %dx%d\n", w, h);
	for (int i = 1; i <= h; i++){
		for (int j = 1; j <= w; j++){
			if (i > 1 && j > 1 && j <= w - 1 && i <= h - 1)
				printf("   ");
			else 
				printf(" * ");
			}
		printf("\n");
		}	
	printf("\nThe fillen rectangle which size is %dx%d\n", w, h);
	for (int i = 1; i <= h; i++){
		for (int j = 1; j <= h * 2; j++)
			for (j = w; j <= )
			printf("   ");
			else 
			printf(" * ");
		printf("\n");
	}
	return 0;
}