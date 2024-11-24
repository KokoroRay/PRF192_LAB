#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, c, d;
	char b;
	printf("Please input the first integer: ");
	scanf("%d", &a);
	printf("Please input the perator: ");
	scanf("%c", &b);
	if (b == '+' || b == '-' || b == '*'
	|| b == '/' || b == '%'){
		printf("Please input the second integer: ");
		scanf("%d", &c);
		if ( c > 0) {
			switch (b) {
				case '+': 
					printf("The result is: %d + %d = %d", a, c, a+c);
					break;
				case '-':
					printf("The result is: %d - %d = %d", a, c, a-c);
					break;
				case '*':
					printf("The result is: %d * %d = %d", a, c, a*c);
					break;
				case '/':
					printf("The result is: %d / %d = %d", a, c, a/c);
					break;
				default:
					printf("The result is: %d % %d = %d", a, c, a%c);
			}
		}
		else 
			printf("\nThe divisor can't be zero!");
	}
	else 
		printf("\nAccept +, -, *, /, % ");
	return 0;
}