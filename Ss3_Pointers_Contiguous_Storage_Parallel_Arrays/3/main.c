#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int total, n, a[50];
	printf("How many element of numeric array? ");
	scanf("%d", &n);
	if (n < 0)
		printf("The number of element of numeric array must be greater than )!");
	else 
		printf("Please enter value for %d elements: \n", n);
		for (int i = 0; i < n; i++){
			printf("Value of  the a[%d]st is: ", i + 1);
			scanf("%d", &a[i]);
		}
	for (int i = 0; i < n; i++){
		total += a[i];	
	}
	printf("The total value of the numeric array is %d\n", total);
	printf("The average value of the numeric array is %f\n", total/(float)n);
	
	
	return 0;
}