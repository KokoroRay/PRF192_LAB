#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void descending () {
	int f;
	for (int i = 0; i < n - 1; i++) {
		f = i;
		for (j = i + 1; j < n; j++) {
			if (str[j] < arr[f]) {
				f = j;
			}
		}
		if (f != i) {
			
		}
	}
}

int main(int argc, char *argv[]) {
	int n;
	int str[100];
	printf("How many element of numeric array? ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Value of the %dst element is: ", (i + 1));
		scanf("%d ", &str[i]);
	}
	
	return 0;
}