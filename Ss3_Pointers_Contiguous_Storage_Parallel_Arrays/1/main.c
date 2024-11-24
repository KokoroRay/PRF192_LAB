#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ne = 0, ze = 0, po = 0, n, a[50];
	printf("How many element of numeric array? ");
	scanf("%d", &n);
	if (n < 0)
		printf("The number of element of numeric array must be greater than )!");
	else 
		printf("Please enter value for 10 elements: \n");
		for (int i = 0; i < n; i++){
			printf("The value of a[%d]: ", i + 1);
			scanf("%d", &a[i]);
		}
	for (int i = 0; i < n; i++){
		if (a[i] > 0){
			po++;
		}
		else if (a[i] < 0) {
			ne++;
		}
		else
			ze++;
	}
	printf("The number of negative elements is %d\n", ne);
	printf("The number of zero elements is %d\n", ze);
	printf("The number of positive elements is %d\n", po);
	
	
	return 0;
}