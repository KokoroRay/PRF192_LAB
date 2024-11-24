#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("All 3-displays negative integers are:\n");
	for (int i = -999; i < -99; i++)
		printf("%d ", i);
	return 0;
}