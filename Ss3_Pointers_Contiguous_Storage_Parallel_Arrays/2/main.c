#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int even = 0, odd = 0, n, a[50];
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
		if (a[i] % 2 == 0){
			odd++;
		}
		else  {
			even++;
		}
	}
	printf("The number of even elements is %d\n", even);
	printf("The number of odd elements is %d\n", odd);
	
	
	return 0;
}