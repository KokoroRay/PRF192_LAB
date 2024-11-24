#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, a = 1, b = 1;
	int str[100];
	printf("How many element of numeric array?");
	scanf("%d", &n); 
	for (int i = 0; i < n; i++) {
		printf("Value of the %dst element is: ", (i + 1));
		scanf("%d", &str[i]);
	}
	printf("The entered array is: \n");
	for (int i = 0; i < n; i++)
		printf("%d ", str[i]);
	
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (str[i] < str[j]) 
				a += 1;
			else if (str[i] > str[j])
				b += 1;
			 
		}
	}
	if (b == 1)
		printf("The array is sorted in an ascending coder!");
	else if (a == 1)
		printf("The array is sorted in an decending coder!");
	else 
		printf("The array is not sorted");
	return 0;
}