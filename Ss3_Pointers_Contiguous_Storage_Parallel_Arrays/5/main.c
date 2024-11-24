#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, a[50];
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
		printf("The entered array is: \n");
		for (int i = 0; i < n; i++)
			printf("%d ", a[i]);
		printf("\nThe reverse array is: \n");
		for (int i = (n - 1); i >= 0; i--)
			printf("%d ", a[i]);
	}
	return 0;
}