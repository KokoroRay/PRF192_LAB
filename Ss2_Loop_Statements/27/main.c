#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int total;
	printf("multiplication tables from 2 to 9\n");
	for (int i = 1; i <= 9; i++)
		for (int j = 1; j <= 10; j++){
			total = i * j;
			printf("%d x %d = %d\n", j, i, total);
		}
	return 0;
}