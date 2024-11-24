#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, newValue, index, f;
	int str[100];
	printf("How many of element of numeric array? ");
	scanf("%d", &n);
	if (n < 0) {
		printf("The number of element of numeric array must be greater than 0!");
	}
	else {
		printf("\nPlease enter value for %d elements:\n", n);
		for (int i = 0; i < n; i++) {
			printf("Value the %dst element is: ", (i + 1));
			scanf("%d", &str[i]);
		}
		printf("The entered array is:");
		for (int i = 0; i < n; i++) {
			printf("%d ", str[i]);
		}
		printf("Please enter the value that you want to insert: ");
		scanf("%d", &newValue);
		printf("Please enter index that the new value will be inserted:");
		scanf("%d", &index);
		if (index < 0 || index > n) {
			printf("The index must be from 0 to %d!", n);
		}
		else {
				for (int i = n - 1; i >= index; i--)
					str[i + 1] = str[i];
				str[index] = newValue;
				
				printf("The array after insert %d into the place that indexed [%d] is:", index, newValue);
				for (int i = 0; i < n + 1; i++)
					printf("%d ", str[i]);		
			}
		
		}
		
	
}