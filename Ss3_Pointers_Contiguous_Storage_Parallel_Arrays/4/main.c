#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, min, max, a[50];
	printf("How many element of numeric array? ");
	scanf("%d", &n);
	if (n < 0)
		printf("The number of element of numeric array must be greater than 0!");
	else {
		printf("Please enter value for %d elements: \n", n);
		for (int i = 0; i < n; i++){
			printf("Value of the %dst element is: ", (i + 1));
			scanf("%d", &a[i]);
		}
	min = a[0];
	for (int i = 0; i <= n; i++){
		if (a[i] < min)
			min = a[i];
	max = a[0];
	for (int i = 0; i <= n; i++)	
		if (a[i] > max)
			max = a[i];
		}
	printf("The minimun value of the numeruc array is: %d\n", min);
	printf("The maximun value of the numeric array is: %d", max);		
	}
	return 0;
}