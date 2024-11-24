#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int searchValue(int *str, int n, int index) {
	int value = -1;
	for (int i = 0; i < n; i++) {
		if (str[i] == index){
			value = i;
			break;
		}	
	}
	
}

int main(int argc, char *argv[]) {
	int n, index;
	int *str = (int *)malloc(n * sizeof(int));
	printf("How many element of numeric array? ");
	scanf("%d", &n);
	if (n < 0) {
		printf("The number of element of numric array must be greater than 0!");
	}
	else { 
		for (int i = 0; i < n; i++) {
			printf("Value of the %dst element is: ", i);
			scanf("%d", &str[i]);
		}
		printf("The entered aarray is:");
		for (int i = 0; i < n; i++)
			printf("%d ", str[i]);
		printf("Please enter index of the element that you want to remove: ");
		scanf("%d", &index);
		if (index < 0 || index > n) {
			printf("The index must be from 0 to %d!", n);
		}
		else {
			int value = searchValue(str, n, index);
			if (value == - 1) {
				printf("The value %d is not flund in this array", index);
			}
			else {
				printf("The first element which value is %d is found at index [2]", index, value);
			}
		}
	}
		
	
	free(str);
	return 0;
}