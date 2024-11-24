#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, total, y;
	while (y != 'n' || y != 'N') {
	printf("Please enter the positive integer N: ");
	scanf("%d", &n);
	if (n < 0)
		printf("N must be greater than 0!");
	else {
		printf("The multiplocation table of %d is:\n", n);
		for (int i = 1; i <= 10; i++){
			total = i * n;
			printf("%d x %d = %d\n", i, n, total);
		}
	}
	printf("Do you want yo continue (y/n)?");
	scanf(" %c", &y);
	
	if (y == 'y' || y == 'Y') {
		printf("----------------------\n");
	}
	else {
		printf("You muse enter 'y' or 'Y' or 'n' or 'N'!!!\n");
		}
	} 
	printf("Thank for using our software!\n");
	printf("Goodbye and see you again.\n");
	return 0;
}