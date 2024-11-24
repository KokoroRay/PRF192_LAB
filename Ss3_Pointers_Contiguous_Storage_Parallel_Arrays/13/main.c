#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, f = 0;
	int str[1000];
	printf("How many element of numeric array? ");
	scanf("%d", &n);
	if (n < 0) {
		printf("The number of element of numeric array must be greater than 0!");
	}
	else {
		for (int i = 0; i < n; i++){
			printf("Value of the %dst element is: ", (i + 1));
			scanf("%d", &str[i]);
		}
		printf("\nThe etered array is: ");
		for (int i = 0; i < n; i++) {
			printf(" %d", str[i]);
		}
		printf("\n");	
		for (int i = 0; i < n - 1; i++){
			for (int j = i + 1; j < n; j++) {
				if (str[i] > str[j]){
					f = str[i];
					str[i] = str[j];
					str[j] = f;
				}
			}
		}
		printf("The sorted array is:");
		for (int i = 0; i < n; i++){
			printf("%d ", str[i]);
		}
	}
	return 0;
}