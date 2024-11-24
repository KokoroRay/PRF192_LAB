#include <stdio.h>
#include <stdlib.h>
#include "Ex05Lib.h"

int main()
{
	int a, b;
	printf("Please enter the positive integer A: ");
	scanf("%d", &a);
	if ( a > 0){
		printf("Please enter the positive integer B: ");
		scanf("%d", &b);

		printf("The greatest common divisor of %d and %d is: %d\n", a, b, GCD(a, b));
		printf("The least common multiple of %d and %d is: %d", a, b, LCM(a, b));
	}
	else
		printf("A and B must be greater than or equal )!");
    return 0;
}
